#define _CRT_SECURE_NO_WARNINGS  // 去除告警,必须在原文件第一行

#include <stdio.h> // 引入头文件
#include <string.h>
//int main()
//{
//	/*int a;
//	int b;
//	int sum;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d", sum);*/
//
//	// 3; // 字面常量
//
//	/*const int num = 4;
//	printf("%d\n", num);*/
//
//	/*enum Sex
//	{
//		MALE,
//		FEMALE
//	};
//
//	enum Sex s = MALE;
//	printf("%d\n", s);*/
//
//
//	return 0;
//}

// scanf C语言提供,不要使用vs提供的scanf_s, 要保证代码的跨平台语言

// 常量
// 3; // 字面常量
// const 修饰的常变量  (常属性) const num = 1; const int num = 4; // num是变量,具有常属性,num是常变量
// #define 定义的标识符常量  #define MAX 10;
// 枚举常量 性别:男,女  枚举关键字 enum;  enum Sex {}


// 字符串  单引号用来引字符
// 字符串的结束标志是一个\0的转义字符,不算做字符串内容和长度 'abc \0'
// ASCII 编码 A65  a97
// strlen() 计算字符串长度
//int main()
//{	
//	char arr1[] = "abc"; // 直接写用双引号
//	char arr2[] = { 'a', 'b', 'c', '\0'}; // 将字符存在数组里面 '\0' 结束标志, 这种方式下,如果没有结束标志,长度将是随机的
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	printf("%c\n", '\x61');
//	return 0;
//}

// 转义字符     \转义符,让字符转变意思,变掉或者变回原来的意思
// \n 换行符  算作一个字符
// \t 水平制表符
// \\t 将水平制表符中的\ 转义为原来的普通字符\
// \ddd 表示1-3个八进制数, 转换的十进制数字所对应的ASCII码值  如\32 转成十进制数字为26,ASCII中对应的是向右的箭头  算作一个字符
// \xdd 表示2个十六进制数 --    \x61 ---> a  一个字符


// 判断语句
// 循环语句

// 函数
//int Add(int x, int y)
//{
//	return x + y;
//}


// 数组
//int main() {
//	int arr[10]; // 定义一个存放10个整数数字的数组
//	int arr2[10] = { 10,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	printf("%d\n", arr2[4]);    // 访问某一个需要带下标
//
//	// 打印全数组需要遍历
//	while (i < 10)
//	{
//		printf("%d\n", arr2[i]);
//		i++;
//	}
//	return 0;
//}

// 算数符 + - * / %
// 移位操作符 <<左移1个二进制位(左边丢掉,右边补齐)       >>右移一个二进制位

// (二进制)位操作符
// &按位与
// |按位或
// ^按位异或 对应的二进制位相同为0, 相异则为1

// 赋值 =   +=...符合赋值符
// 判断 ==

// 单目操作符 1个操作数  !逻辑反操作 -号  sizeof计算变量或者类型所占空间的大小 单位是字节  数组大小/一个元素的大小 = 个数
//                       ~按位取反 int a = 0; int b = ^a;  得到的b为 -1    后置++ 先使用,再++, 前置++ 先++,再使用   (类型)强制类型转换
//  原码, 反码, 补码
//int main()
//{
//	int a = (int) 3.14;  //double 数据类型强制转换为int类型;消除告警
//	printf("%d\n", a);
//	return 0;
//}
// 负数以二进制补码的形式存储 
// 
// 
// 双目操作符 有两个操作数
// && ;逻辑与  || 逻辑或   和js中的结果不同  3&&5  逻辑真时,得到的结果为1,逻辑假时,得到的结果为0
// 
// 三目操作符 exp1? exp2:exp3

// 逗号表达式 exp,exp2,exp3,exp4...

// & * . ->


// -1, 1 有符号数,内存中存储,最高位是符号位(其中1代表是负数,0代表是整数)
// int = signed int, signed被省略掉了,int定义的变量有符号
// unsigned int 定义无符号变量

// 关于原,反,补码
// 原码,直接写出的二进制序列
// 反码,原码的符号位不变,其他位按位取反得到
// 补码, 反码+1

// 关键字
// auto 局部变量-->自动变量, 自动产生,自动销毁  局部变量前面都省略了auto
// break ,case, char const continue, default , do,  double, else,  enum, extern, float, for, goto, if, int, long, register(寄存器关键字)
// return short  signed sizeof static struct(结构体关键字) switch typedef union(联合体,共用体)  unsigned  void volatile while等等
// 注意: 变量名不能和关键字重名
// typedef类型定义,类型重定义 为类型重新定义名字 typedef unsigned int u_int
// static int a = 1; // static 修饰之后 a是一个静态的局部变量,使局部变量的生命周期变长    修饰,全局变量,改变作用域,只能在自己文件内部使用
// static 修饰函数 extern int Add(int, int) 用法类似于修改变量, 改变了函数的链接属性  外部链接属性-->内部链接属性
// #define MAX 10 定义标识符常量  定义宏---带有参数  #define MAX(X,Y) (X>Y?X:Y)

// 计算机 存储数据
// 寄存器 register int a = 10; 建议把a定义成寄存器变量
// 高速缓存
// 内存
// 硬盘

// 指针
// 内存: 1byte 一个单元
// &a 取地址a
// int* p = &a; 有一种专门用来存放地址的变量,叫做指针变量 类型为 int*
// *p // *--解引用操作符  *p = 20;  此时,p存放的地址对应的变量a被通过修改地址内的内容,被重新赋值为20
// 指针大小, 在32位 是 32bit = 4byte  在64位 是 64bit = 8byte
//int main()
//{
//	int a = 10;
//	int* p = &a; // int* ---*表示是指针变量,int 表示p指向的对象a是int类型
//	printf("%d\n", *p);  // 打印函数记得用双引号
//	return 0;
//}

// 结构体 -- 自己创造出来的一种类型,用来描述复杂对象
// 创建一个结构体类型
struct Book
{
	char name[20];
	short price;
		 
};// 有分号
int main()
{
	struct Book b1 = {
		"CCCCCCCCCC",
		555
	};
	struct Book* p = &b1;
	printf("%s\n", b1.name);

	b1.price = 19;
	printf("%d\n", b1.price);
	printf("%d\n", (*p).price); // 括起来  结构体变量.成员

	printf("%s\n", p->name); // 结构体指针->成员
	printf("% s\n", p->name);
	
	return 0;
}



