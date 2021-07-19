#define _CRT_SECURE_NO_WARNINGS 1
//源文件第一行

//#include <stdio.h>
////包含一个stdio.h的文件
////std-标准 standard input output
//int main()
////主函数-程序的入口-main函数有且仅有一个
////int-整型  
////main前面的int表示main函数调用返回一个整型值
//{
//	printf("hello world\n");
//	//function-函数 printf-打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	return 0;//返回0
//}

//char-字符类型
//#include <stdio.h>
//int main()
//{
//	char ch = 'A';//内存
//	printf("%c\n", ch); //%c-打印字符格式的数据
//	return 0;
//}

//int-整型
//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	printf("%d\n", age);//%d-打印整型十进制数据
//	return 0;
//}

//short-短整型
//long-长整型

//float-单精度浮点型 
//#include <stdio.h>
//int main()
//{
//	float f = 5.0;
//	printf("%f\n", f);
//	return 0;
//}

//double-双精度浮点数
//#include <stdio.h>
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//不同类型向内存申请空间大小
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2 范围为0-2^16-1=65535
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4或8  C语言标准规定 sizeof(long)>sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//}

//计算机中的单位
////bit-比特位-存储一个二进制位的空间大小-0和1
////byte-字节 1byte=8bit 
////1KB=1024byte MB=1024KB GB=1024MB TB=1024GB PB=1024TB

//#include <stdio.h>
//int main()
//{
//	short age = 20;//向内存申请2个字节=16bite位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节,存放小数
//	printf("%d %f\n", age,weight);
//}

//#include <stdio.h>
//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部的变量
//	//当局部变量和全局变量名字相同时，局部变量优先
//	//建议二者名字不同-容易误会，产生bug
//	printf("%d %d\n", num1,num2);
//	return 0;
//}

//计算两个数的和
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	//输入数据-使用输入函数scanf
//	scanf("%d %d", &num1, &num2);//取地址符号&
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	{
//		int num2 = 0;//局部变量作用域-可用代码范围
//		printf("num1=%d num2=%d\n", num1,num2);
//	}
//	return 0;
//}

//#include <stdio.h>
//int global = 2020;//全局变量作用域是整个工程
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//全局变量生命周期-整个程序生命周期
//#include <stdio.h>
//int main()
//{
//	//extern-声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//}

//局部变量生命周期-进入作用域开始，出作用域结束
//#include <stdio.h>
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);//ok
//	}
//	printf("a=%d\n", a);//error
//	return 0;
//}
 
//#include <stdio.h>
//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以说n是常变量
//	int arr[10] = { 0 };//定义数组
//	int arr[n] = { 0 };//error
//	//const int num = 4;//const-常属性 num-const修饰的常变量
//	//printf("%d\n", num);
//	//3;//字面常量
//	//100;
//	//3.14;
//	return 0;
//}

//#define定义的标识符常量
//#include <stdio.h>
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举-一一列举
//性别：男、女、保密
//#include <stdio.h>
////枚举关键-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-枚举常量-不可被改变
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//三原色：红、黄、蓝
//#include <stdio.h>
//enum Color
//{
//	RED,
//	YELLO,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//  BLUE = 6;//error
//	return 0;
//}
