# JQScrollNumberLabel
JQScrollNumberLabel 一个显示数字的控件，当你改变其数字时，能够有滚动的动画，同时动画和位数可以限制，动态创建和实例化可选，字体样式自定义 

将JQScrollNumberLabel文件夹中的两个文件复制进工程，在需要使用的地方导入头文件

#import "JQScrollNumberLabel.h"

@interface ViewController ()

@property (nonatomic, strong)JQScrollNumberLabel *scrollLabel;

@end

初始化的方法传人字体大小或是一个字体，不要设置其frame，只需改变其位置即可，因为它是根据字体大小自动计算自身的大小

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.scrollLabel = [[JQScrollNumberLabel alloc] initWithNumber:@(1) font:[UIFont fontWithName:@"AppleSDGothicNeo-SemiBold" size:40] textColor:[UIColor grayColor] rowNumber:5];
    
    self.scrollLabel.frame = CGRectMake(100, 100, self.scrollLabel.frame.size.width, self.scrollLabel.frame.size.height);
    
    [self.view addSubview:self.scrollLabel];
    
}
@end

当想要改变其数值时，调用下面方法即可,当animated参数为NO时不会播放动画

[self.scrollLabel changeToNumber:@(10) animated:YES];

问题

1.目前还不支持负数的显示
2.显示的位数有限制，最大8位

