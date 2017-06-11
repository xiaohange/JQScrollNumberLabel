# JQScrollNumberLabel

## 简介： 

JQScrollNumberLabel 仿tumblr热度滚动数字条数，一个显示数字的控件，当你改变其数字时，能够有滚动的动画，同时动画和位数可以限制，动态创建和实例化可选，字体样式自定义等等。

本控件核心采用了好友代培的核心代码,更多样式请看: https://github.com/948080952/DPScrollNumberLabel

JQScrollNumberLabel imitation Tumblr heat rolling digital number, a digital display controls, when you change the numbers, to scroll animation and animation and number restrictions, dynamically create and instantiate the optional custom font style, etc..

## 效果展示
#### 限制位数：Limit digit

![](https://github.com/xiaohange/JQScrollNumberLabel/blob/master/1.gif?raw=true)


#### 动态创建位数：Dynamic creation bit

![](https://github.com/xiaohange/JQScrollNumberLabel/blob/master/2.gif?raw=true)


#### 仿Tumblr中的热度-滚动数字：Imitation Tumblr in the heat - rolling number

![](https://github.com/xiaohange/JQScrollNumberLabel/blob/master/3.gif?raw=true)

## How to use?

将JQScrollNumberLabel文件夹中的两个文件复制进工程，在需要使用的地方导入头文件

The JQScrollNumberLabel folder to copy the two files into the project, where you need to import the header file

```
#import "JQScrollNumberLabel.h"

@interface ViewController ()

@property (nonatomic, strong)JQScrollNumberLabel *scrollLabel;

@end
```

初始化的方法传人字体大小或是一个字体，不要设置其frame，只需改变其位置即可，因为它是根据字体大小自动计算自身的大小，若想动态设置位数不要带rowNumber参数即可：

A method to initialize the descendants of font size or a font, do not set the frame, only need to change its position, because it is based on the automatic calculation of the size of its font size, to dynamically set the number of parameters to don't take rowNumber:


```
@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.scrollLabel = [[JQScrollNumberLabel alloc] initWithNumber:@(1) font:[UIFont fontWithName:@"AppleSDGothicNeo-SemiBold" size:40] textColor:[UIColor grayColor] rowNumber:5];
    
    self.scrollLabel.frame = CGRectMake(100, 100, self.scrollLabel.frame.size.width, self.scrollLabel.frame.size.height);
    
    [self.view addSubview:self.scrollLabel];
    
}
@end
```

当想要改变其数值时，调用下面方法即可,当animated参数为NO时不会播放动画

When you want to change the value, call the following method, when the animated parameter is NO will not play animation

```
[self.scrollLabel changeToNumber:@(10) animated:YES];
```
## QT

* 1.目前还不支持负数的显示

* 2.显示的位数有限制，最大8位

## Consultation

>iOS开发者交流群：446310206   喜欢就❤️❤️❤️star一下吧！你的支持是我更新的动力！
>Love is every every every star! Your support is my renewed motivation!

## Other
[JQTumblrHud-高仿Tumblr App 加载指示器hud](https://github.com/xiaohange/JQTumblrHud)

[JQScrollNumberLabel：仿tumblr热度滚动数字条数](https://github.com/xiaohange/JQScrollNumberLabel)

[TumblrLikeAnimView-仿Tumblr点赞动画效果](https://github.com/xiaohange/TumblrLikeAnimView)

[JQMenuPopView-仿Tumblr弹出视图发音频、视频、图片、文字的视图](https://github.com/xiaohange/JQMenuPopView)

## License

This code is distributed under the terms and conditions of the [MIT license](LICENSE). 

