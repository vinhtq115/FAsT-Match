//
//  main.cpp
//  FAsT-Match
//
//  Created by Saburo Okita on 22/05/14.
//  Copyright (c) 2014 Saburo Okita. All rights reserved.
//

#include <iostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>
#include <chrono>
#include "FAsTMatch.h"
#include "MatchConfig.h"

using namespace std;
using namespace std::chrono;
using namespace cv;

int main(int argc, const char * argv[])
{
	if (argc != 4) {
		cout << "Error. Must have at least 3 arguments.\nFAsT-Match.exe <path-to-image> <path-to-template> <path-to-save-mapping>" << endl;
		return -1;
	}
	
	Mat image = imread(argv[1]);
	Mat templ = imread(argv[2]);

	fast_match::FAsTMatch fast_match;
	fast_match.init(0.15f, 0.85f, false, 0.5f, 2.0f);

	double distance;
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	vector<Point2f> corners = fast_match.apply(image, templ, distance, -M_PI);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	cout << "Duration: " << (double)duration_cast<milliseconds>(t2 - t1).count() / 1000. << "s\n";

	line(image, corners[0], corners[1], Scalar(0, 0, 255), 2);
	line(image, corners[1], corners[2], Scalar(0, 0, 255), 2);
	line(image, corners[2], corners[3], Scalar(0, 0, 255), 2);
	line(image, corners[3], corners[0], Scalar(0, 0, 255), 2);

	imshow("Template", templ);
	imshow("Mapping", image);

	waitKey(0);
	imwrite(argv[3], image);
}

