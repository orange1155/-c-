#define _CRT_SECURE_NO_WARNINGS 1

//�ַ�������
#include <stdio.h>
#include<string.h>
//int main()
//{
//	"";//���ַ���
//	"abcdef";
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//ASCII ����
//	//'A'--65
//	//'a'--97
//  //'0'--48
//	char arr1[] = "abc";//����
//	//"abc"--'a' 'b' 'c' '\0'--0
//	//'\0'--�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' ,'\0'};//���"0"��"'\0'"
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//} 

//ת���ַ�-ת��ԭ������˼
//int main()
//{
//	//printf("abc\n");//\n-����
//	//printf("c:\test\32\test.c");//\t-ˮƽ�Ʊ��
//	//printf("c:\\test\\32\\test.c");//\\-���ڱ�ʾһ����б�ܣ���ֹ������Ϊһ��ת�����з�
//	/*printf("(are you ok\?\?)\n");*/
//	//??+)-->����ĸ��--�ϱ���������ʵ��
//	//\?-��ֹ������������ĸ��
//	/*printf("%c\n", '\'');//\'���ڱ�ʾ�����ַ�'*/
//	//printf("%s\n", "\"");//\"���ڱ�ʾ�����ַ�"
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));//����Ϊ13-ת���ַ�Ϊһ���ַ�
//	//\ddd-ddd��ʾ1-3���˽�������
//	//printf("%c\n", '\132');//Z
//	//\32-�����˽�������-32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32--> ʮ���� 26--> ���ҵļ�ͷ
//	//xdd-dd��ʾ2��ʮ����������
//	//printf("%c\n", '\x61');//a
//	return 0;
//}

//ע��--ctrl+k+c
//ȡ��ע��--ctrl+k+u
//ע�����ڴ���Ƚ��Ѷ��ĵط������ʹ���
//int main()
//{
//	/*
//	int a=10;
//	*/
//	//printf("%d\n",a);
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������");
//	return 0;
//}

//ѭ�����-while for do while
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while(line<20)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20)
//	printf("��offer\n");
//	return 0;
//}

//����
//int Add(int x, int y)//�Զ��庯��-���
//{
//	int z=x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//����-һ����ͬ����Ԫ�صļ���
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	//�±�Ĭ�ϴ�0��ʼ arr[0]=1
//	printf("%d\n", arr[4]);
//	/*char ch[20];
//	float arrr2[5];*/
//	return 0;
//}

//����������- + - * / %��ȡ������
//int main()
//{
//	int a = 5 / 2;//2
//	int b = 5 % 2;//1
//	printf("%d %d\n", a,b);
//	return 0;
//}

//��λ������-�Ƶ��Ƕ�����λ-��0
//<< ����
//>> ����
//int main()
//{
//	int a = 1;//����1ռ�ĸ��ֽ�-32bitλ
//	//00000000 00000000 00000000 00000001
//	int b = a << 2;
//	int c = a >> 1;
//	printf("%d %d %d\n",a, b,c);
//	return 0;
//}

//λ����(2����)
//&��λ�� - 0���κ���Ϊ0 1&1=1
//|��λ�� - 1���κλ�Ϊ1 0|0=0
//^��λ��� - ��Ӧ�Ķ�����λ��ͬ��Ϊ0��������Ϊ1
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

//��ֵ������
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ ==�ж����
//	a = a + 10;//a += 10;
//	a = a - 20;//a -= 20;
//	a = a & 2;//a &= 2;
//	//���ϸ�ֵ��
//	// += -= *= /= %= >>= <<= &= |= ^=
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	/*int a = 10;*/
//	//int b = 20;
//	//a + b;//+ - ˫Ŀ������
//	//C�����б�ʾ���
//	//0-��
//	//1-��
//	/*int a = 0;*/
//	int a = -2;
//	int b = -a;//����
//	int c = +3;//���Ŷ���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);//�߼������� ���� �ٱ���
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	////sizeof������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a );
//	int arr[10] = { 0 };
//	int sz = 0;
//	//10*sizeof(int)
//	printf("%d\n", sizeof(arr));
//	//��������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
//}



