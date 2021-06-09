#define _CRT_SECURE_NO_WARNINGS

// 包含一个叫stdio.h的文件
// std 标准 i输入 o 输出
#include <stdio.h>
//int main() // 主函数--函数唯一入口  int整型,表示main函数的返回值类型
//{
	// 完成任务
	// printf 打印函数
	// 库函数-C语言提供 #include
// 	printf("HELLOWORD\n"); 
//  return 0; // 返回0
//}

// 数据类型
// %d 打印整型 %c打印字符 %f 打印浮点型 %p以地址形式打印 %x 打印十六进制数字 %s 打印字符
// char 字符类型
//int main()
//{
//	//char ch = 'A'; // 内存
//	//printf("%c\n", ch); // %c 打印字符格式的数据 \n转义符换行
//	//int age = 20;
//	//printf("%d\n",age);  // %d打印整型十进制数据;
//	//long num = 100;
//	//printf("%d\n", num);
//	//float f = 5.0;
//	//printf("%f",f);
//	/*double d = 3.14;
//	printf("%lf", d);*/
//
//	printf("%d\n", sizeof(char)); // 1 byte
//	printf("%d\n", sizeof(short)); // 2
//	printf("%d\n", sizeof(int)); // 4
//	printf("%d\n", sizeof(long)); // 4 or 8  >= sizeof(int) 即可
//	printf("%d\n", sizeof(long long));// 8
//	printf("%d\n", sizeof(float)); // 4
//	printf("%d\n", sizeof(double)); // 8
//	return 0;
//}
// short 短整型
// int 整型
// long 长整型
// long long 更长的整型
// float 单精度浮点数
// double 双精度浮点数 精度更高

// 1bit  存一个二进制位
// 1byte 字节 = 8个比特位
// kb  1024byte

// float weight = 45.5f; f注明了类型为单精度浮点数,避免了告警

// 以上类型用来定义变量 int age = 12;

// 局部变量,全局变量
// 作用域不同 全局变量作用于整个项目工程
// 不在同一个文件内部使用全局变量,需要使用extern声明是外部变量 
// 局部变量和全局变量同名产生冲突的时候,局部变量优先,建议不要有相同变量名
// 大括号内部形成一个局部,相当于js中的作用域
//int num2 = 20; // 全局变量
//int main() 
//{	
//	int num1 = 10; // 局部变量
//	printf("%d\n", num2);
//	return 0;
//}

// 两个数的和
//int main() {
//	// C语言语法规定变量要定义在代码块的最前面 js中var有变量提升产生类似的效果, let,const声明的时候就没有这样的要求了
//	int num1;
//	int num2;
//	int sum;
//	scanf("%d%d", &num1, &num2);// 输入函数 #include自带 ==>输入函数  &取地址符号 
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

// 声明周期
// 局部变量 从进入作用域开始,出作用域结束
// 全局变量 整个程序的声明周期

