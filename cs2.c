#define _CRT_SECURE_NO_WARNINGS 1

//字符串类型
#include <stdio.h>
#include<string.h>
//int main()
//{
//	"";//空字符串
//	"abcdef";
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//ASCII 编码
//	//'A'--65
//	//'a'--97
//  //'0'--48
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' '\0'--0
//	//'\0'--字符串的结束标志
//	char arr2[] = { 'a','b','c' ,'\0'};//后加"0"或"'\0'"
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//} 

//转义字符-转变原来的意思
//int main()
//{
//	//printf("abc\n");//\n-换行
//	//printf("c:\test\32\test.c");//\t-水平制表符
//	//printf("c:\\test\\32\\test.c");//\\-用于表示一个反斜杠，防止被解释为一个转义序列符
//	/*printf("(are you ok\?\?)\n");*/
//	//??+)-->三字母词--老编译器可以实现
//	//\?-防止被解析成三字母词
//	/*printf("%c\n", '\'');//\'用于表示常量字符'*/
//	//printf("%s\n", "\"");//\"用于表示常量字符"
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));//长度为13-转义字符为一个字符
//	//\ddd-ddd表示1-3个八进制数字
//	//printf("%c\n", '\132');//Z
//	//\32-两个八进制数字-32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32--> 十进制 26--> 向右的箭头
//	//xdd-dd表示2个十六进制数字
//	//printf("%c\n", '\x61');//a
//	return 0;
//}

//注释--ctrl+k+c
//取消注释--ctrl+k+u
//注释用于代码比较难懂的地方，解释代码
//int main()
//{
//	/*
//	int a=10;
//	*/
//	//printf("%d\n",a);
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯");
//	return 0;
//}

//循环语句-while for do while
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while(line<20)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20)
//	printf("好offer\n");
//	return 0;
//}

//函数
//int Add(int x, int y)//自定义函数-设计
//{
//	int z=x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//数组-一组相同类型元素的集合
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	//下标默认从0开始 arr[0]=1
//	printf("%d\n", arr[4]);
//	/*char ch[20];
//	float arrr2[5];*/
//	return 0;
//}

//算数操作符- + - * / %（取余数）
//int main()
//{
//	int a = 5 / 2;//2
//	int b = 5 % 2;//1
//	printf("%d %d\n", a,b);
//	return 0;
//}

//移位操作符-移的是二进制位-补0
//<< 左移
//>> 右移
//int main()
//{
//	int a = 1;//整型1占四个字节-32bit位
//	//00000000 00000000 00000000 00000001
//	int b = a << 2;
//	int c = a >> 1;
//	printf("%d %d %d\n",a, b,c);
//	return 0;
//}

//位操作(2进制)
//&按位与 - 0与任何与为0 1&1=1
//|按位或 - 1与任何或为1 0|0=0
//^按位异或 - 对应的二进制位相同则为0，相异则为1
//int main()
//{
//	int a = 3;
//	//011
//	int b = 5;
//	//101
//	int c = a & b;//1 001
//	int d = a | b;//7 111
//	int e = a ^ b;//6 110
//	printf("%d %d %d\n", c,d,e);
//	return 0;
//}

//赋值操作符
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值 ==判断相等
//	a = a + 10;//a += 10;
//	a = a - 20;//a -= 20;
//	a = a & 2;//a &= 2;
//	//复合赋值府
//	// += -= *= /= %= >>= <<= &= |= ^=
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	/*int a = 10;*/
//	//int b = 20;
//	//a + b;//+ - 双目操作符
//	//C语言中表示真假
//	//0-假
//	//1-真
//	/*int a = 0;*/
//	int a = -2;
//	int b = -a;//负号
//	int c = +3;//正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);//逻辑反操作 真变假 假变真
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	////sizeof计算的是变量或类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a );
//	int arr[10] = { 0 };
//	int sz = 0;
//	//10*sizeof(int)
//	printf("%d\n", sizeof(arr));
//	//计算数组元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
//}



