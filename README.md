# FAsT-Match
FAsT-Match implementation for Windows platform. Based on [subokita's implementation for Mac OS](https://github.com/subokita/FAsT-Match).

Link to paper: http://www.eng.tau.ac.il/~avidan/papers/FastMatch_cvpr_2013.pdf

## Requirements
| Library | Version |
| ------ | ------ |
| OpenCV | 4.5.0 |
| Intel TBB | 2020.3 |

## Dataset
[Link](https://drive.google.com/file/d/172cyQCyTDvdC6ylzAS3xwR-PGAnDhjcT/view?usp=sharing)

## How to run
```
> FAsT-Match <path-to-image> <path-to-template>
```

## Some results
| Original | Affine transformed | Template | Mapping |
| ------ | ------ | ------ | ------ |
| ![original](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0001.jpg "Original image") | ![Affine transformed](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0001-affined.jpg "Affined image") | ![Template](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0001-template.jpg "Template") | ![Mapping](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0001-mapping.jpg "Mapping") |
| ![original](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0002.jpg "Original image") | ![Affine transformed](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0002-affined.jpg "Affined image") | ![Template](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0002-template.jpg "Template") | ![Mapping](https://github.com/vinhtq115/FAsT-Match/raw/master/images/0002-mapping.jpg "Mapping") |
