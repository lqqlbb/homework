# 双创实践周总结
## 开源硬件实战课程
>上课时间 2019/7/2---2019/7/5
***
***
## 第一天  介绍入门
1. 为什么学习开源硬件
1.1 开源硬件的含义
开源硬件指与自由及开放原始码软件相同方式设计的计算机和电子硬件。开源硬件开始考虑对软件以外的领域开源，是开源文化的一部分。软件开源主要指软件的源代码。硬件开源主要指硬件的电路图等开源。
1.2 开源硬件怎么应用
开源硬件极大方便了人们的生活，可以说在生活中的许多方面都用到了这些硬件，而开源的硬件更方便人们在其中实现自己的设计，进而达到想要的功能。在教育方面，开源硬件从小学生到大学生都在玩，在动手实践中学习计算机方面的许多知识。开源硬件实战这门课就是在这个理念上开展的，不管你的职业是什么，都可以在其中找到乐趣。
2. 如何学习开源硬件
学习开源硬件是一个循序渐进的过程，虽然门槛不高，但越深入越会发现，其中涉及着大量的知识。其实我也是刚开始接触这门课程，懂得并不多，但是我有一些粗浅的认识。首先，对于微机原理必须有一定的了解，然后就是编程知识。不光是c这种面对过程的，c++这种面对对象的语言也必须熟悉。这之后就是实践与学习相结合，遇到问题就去百度答案学习。
3. 学习时常用的硬件
首先去某宝买一块开发版，鉴于Arduino系列简单易懂，即使外行人也可以轻松入手，就选择Arduino系列进行入门。其实我有一个板子，但是那个太难太复杂，硬件太多，这也提醒我们，在初入一个领域时切忌好高骛远，不然不利于学习入门，被卡在一个瓶颈，又会打击积极性。所以我们选择最简单的板子，其他IC自备。
首先要有硬件，但软件也是必不可少。
4. 学习时常用的软件
4.1 先了解一下关于Arduino的知识
Arduino是一款便捷灵活、方便上手的开源电子原型平台。包含硬件（各种型号的Arduino板）和软件（Arduino IDE)。由一个欧洲开发团队于2005年冬季开发。
它构建于开放原始码simple I/O介面版，并且具有使用类似Java、C语言的Processing/Wiring开发环境。主要包含两个的部分：硬件部分是可以用来做电路连接的Arduino电路板；另外一个则是Arduino IDE，你的计算机中的程序开发环境。你只要在IDE中编写程序代码，将程序上传到Arduino电路板后，程序便会告诉Arduino电路板要做些什么了。
Arduino能通过各种各样的传感器来感知环境，通过控制灯光、马达和其他的装置来反馈、影响环境。板子上的微控制器可以通过Arduino的编程语言来编写程序，编译成二进制文件，烧录进微控制器。对Arduino的编程是通过 Arduino编程语言 (基于 Wiring)和Arduino开发环境(基于 Processing)来实现的。基于Arduino的项目，可以只包含Arduino，也可以包含Arduino和其他一些在PC上运行的软件，他们之间进行通信 (比如 Flash, Processing, MaxMSP)来实现。
4.2 常用软件
Arduino、Fritzing（电路板设计）、Processing。
5. 学习时常用的网站
5.1GitHub
这是一个方便的版本管理工具，可以在团队合作中使用。而且有强大的快照功能，也能追溯代码完成人，确保抓获。
5.2 Arduino.cc
Arduino的官网，可以学习上面的实例或者查阅资料。
5.3 Tinkercad
一个可视化的仿真网站，可以十分便捷的进行简单的仿真操作。
## 第二天  软件的基本操作和Arduino函数使用
1.  Arduino的安装
Arduino一定要装好，这是其他操作的基础步骤，傻瓜式安装，没什么好说的。
2. Arduino文档

3. Arduino基本操作
Arduino打开时就为两个函数，一个setup(  ),一个loop(  )，setup是只运行一次的初始化函数，而loop是一个死循环，如果不管他，就一直运行。在这两个函数外可以再定义新的函数和变量，函数需要进行调用，而变量可基本理解为全局变量，有全局的可视域和生存域。
4. Arduino类库操作
主要讲解了定义引脚、引脚输入、输出和串口使用函数。因为是类C的语言，大多数C/C++的东西都可以用上。为方便特定的目的，可以自行编辑新的库函数。
4.1 引脚的定义、输入输出
在 setup中定义引脚的属性，可以进行模拟或数字输入输出。
4.3 串口有关的函数Serial
通过这个和串口有关的一类函数，可以通过串口实现与板子的输入和输出。
5. 实战：Morse代码控制小灯
5.1 Morse代码：
摩尔斯电码（又译为摩斯密码，Morse code）是一种时通时断的信号代码，通过不同的排列顺序来表达不同的英文字母、数字和标点符号。它发明于1837年，发明者有争议，是美国人塞缪尔·莫尔斯或者艾尔菲德·维尔。 摩尔斯电码是一种早期的数字化通信形式，但是它不同于现代只使用零和一两种状态的二进制代码，它的代码包括五种： 点、划、点和划之间的停顿、每个字符之间短的停顿、每个词之间中等的停顿以及句子之间长的停顿。
[转换](/总结（第四天）/morse.jpg  )
5.2 在线仿真网站Tinkercad进行仿真
1. 简单搭建Arduino和LED的线路
2. 写入代表Morse的代码
``` 
#include "Arduino.h"    //引用Arduino库

class Morse             //为了迎合网站要求，只好将这些定义都加入代码中
{
public:
Morse(int pin);
void dot();
void dash();
private:
int _pin;
};
Morse::Morse(int pin)
{
pinMode(pin,OUTPUT);
_pin=pin;
}

void Morse::dot()
{
digitalWrite(_pin,HIGH);
delay(250);
digitalWrite(_pin,LOW);
delay(250);
}

void Morse::dash()
{
digitalWrite(_pin,HIGH);
delay(1000);
digitalWrite(_pin,LOW);
delay(250);
}

int in=0;
void setup() {Serial.begin(9600);



}
Morse morse(13);
#define d morse.dot()            //利用宏定义简化函数的名称
#define da morse.dash()
void loop() {
if(Serial.available()>0)
{in=Serial.read();
switch(in)
{case 32:digitalWrite(13,LOW); delay(250*7);break;
case 'a': d;da;break;
case 'b':da;d;d;d;break;
case 'c':da;d;da;d;break;
case 'd':da;d;d;break;
case 'e':d;break;
case 'f':d;d;da;d;break;
case 'g':da;da;d;break;
case 'h':d;d;d;d;break;
case 'i':d;d;break;
case 'j':d;da;da;da;break;
case'k':da;d;da;break;
case 'l':d;da;d;d;break;
case 'm':da;da;break;
case 'n':da;d;break;
case 'o':da;da;da;break;
case 'p':d;da;da;d;break;
case 'q':da;da;d;da;break;
case 'r':d;da;d;break;
case 's':d;d;d;break;
case 't':da;break;
case'u':d;d;da;break;
case 'v':d;d;d;da;break;
case 'w':d;da;da;break;
case 'x':da;d;d;da;break;
case 'y':da;d;da;da;break;
case 'z':da;da;d;d;break;
case 13:digitalWrite(13,LOW); delay(250*7);break;
}}}  
```
## 第三天  元器件和电路图讲解
* 使用在线模拟网站Tinkercad
强烈推荐，这个网站非常适合新手去使用，在以往用Protues时十分难受，先不说都是英文版，从元件库中找到合适的元件都得费一番力。不过这个仿真软件也有一些问题，原件太少、对基础的波形仿真起来都有些费劲。不过对初识开源硬件的我们和那些非这类专业的新手来说可以称得上是友好了。对于一些小朋友来学编程和电路十分合适。
* 小车电路图及代码
小车配备两个电机和四个小灯，可以实现前进、后退、左转、右转，四个小灯在移动时可以根据方向来或亮起或闪烁。这里只做了简单的理解，就用信号输入口来驱动电机，但是电流很小，会使电机z运转很慢。电路原理图就不画了，这里是实物图。
[小车](摩尔斯编码（/总结（第四天）/屏幕快照\ 2019-07-04\ 下午3.59.13.png  )
```
int in=0,i=0;
void charge()
{ i=Serial.available();

if(i!=0)
in=Serial.read();   //如果没有输入新值，保持现在的状态
}
void forward()
{digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
digitalWrite(13, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
void backward()
{digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(9, LOW);
digitalWrite(10,HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
digitalWrite(13, LOW); //防止左右转同时亮，产生冲突
digitalWrite(4, LOW);
}
void left()
{digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(2, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(13, HIGH); //让左转灯可以闪烁
delay(750);
digitalWrite(3, LOW);
digitalWrite(13, LOW);
delay(750);
}
void right()
{digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
digitalWrite(13, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(2, HIGH);  //让右转灯闪烁
delay(750);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
delay(750);
}
void setup()
{
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(13, OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);

}

void loop()
{
charge();
if(in>0)
{ switch(in)
{case 'w':forward();break;
case 's':backward();break;
case 'a':left();break;
case 'd': right();break;
default: Serial.println("wrong");break;}


}}
```
* 7段LED显示器和解码器的使用
1. 7段LED显示器
LED显示屏（LED panel），是一种通过控制半导体发光二极管的显示方式，用来显示文字、图形、图像、动画、行情、视频、录像信号等各种信息的显示屏幕。
任务要求：利用串口输入数字0-9，在显示器上显示对应的数字。
2. CD4511 是一片 CMOS BCD—锁存/7 段译码/驱动器，用于驱动共阴极 LED （数码管）显示器的 BCD 码-七段码译码器。
具有BCD转换、消隐和锁存控制、七段译码及驱动功能的CMOS电路能提供较大的拉电流。可直接驱动共阴LED数码管。
[真值表](/Users/lkr/Desktop/摩尔斯编码（第四天）/morse.jpg /Users/lkr/Desktop/摩尔斯编码（第四天）/屏幕快照\ 2019-07-04\ 下午3.59.13.png /Users/lkr/Desktop/CD4511.jpg)
分析：对输入数字的每一位进行分析，再将每一位进行输出，一个数所对应的二进制数就是它的真值。使用一个只有想得到的数位为一，其他位都为0的数字与该数字进行&的运算，得到的数为1，则该位为1，得到的数为0，则该位为0。
```
void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}
unsigned int in=0;
void loop()

{ if(Serial.available()>0)
{ in=Serial.read();
in=in-'0';
Serial.println(in,BIN);}
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

digitalWrite(8, (in&1)?HIGH:LOW); //按位与操作获得各位的二进制数字
digitalWrite(9, (in&2)?HIGH:LOW);
digitalWrite(10, (in&4)?HIGH:LOW);
digitalWrite(11, (in&8)?HIGH:LOW);

}
```
[实现图]( /总结（第四天）/屏幕快照\ 2019-07-04\ 下午3.59.13.png  )


## 第四天  总结
* 总结前几天内容
* 提出问题与思考


