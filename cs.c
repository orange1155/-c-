#define _CRT_SECURE_NO_WARNINGS 1
//Դ�ļ���һ��

//#include <stdio.h>
////����һ��stdio.h���ļ�
////std-��׼ standard input output
//int main()
////������-��������-main�������ҽ���һ��
////int-����  
////mainǰ���int��ʾmain�������÷���һ������ֵ
//{
//	printf("hello world\n");
//	//function-���� printf-��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	return 0;//����0
//}

//char-�ַ�����
//#include <stdio.h>
//int main()
//{
//	char ch = 'A';//�ڴ�
//	printf("%c\n", ch); //%c-��ӡ�ַ���ʽ������
//	return 0;
//}

//int-����
//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	printf("%d\n", age);//%d-��ӡ����ʮ��������
//	return 0;
//}

//short-������
//long-������

//float-�����ȸ����� 
//#include <stdio.h>
//int main()
//{
//	float f = 5.0;
//	printf("%f\n", f);
//	return 0;
//}

//double-˫���ȸ�����
//#include <stdio.h>
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//��ͬ�������ڴ�����ռ��С
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2 ��ΧΪ0-2^16-1=65535
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4��8  C���Ա�׼�涨 sizeof(long)>sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//}

//������еĵ�λ
////bit-����λ-�洢һ��������λ�Ŀռ��С-0��1
////byte-�ֽ� 1byte=8bit 
////1KB=1024byte MB=1024KB GB=1024MB TB=1024GB PB=1024TB

//#include <stdio.h>
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16biteλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽ�,���С��
//	printf("%d %f\n", age,weight);
//}

//#include <stdio.h>
//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ��ı���
//	//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
//	//����������ֲ�ͬ-������ᣬ����bug
//	printf("%d %d\n", num1,num2);
//	return 0;
//}

//�����������ĺ�
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	//��������-ʹ�����뺯��scanf
//	scanf("%d %d", &num1, &num2);//ȡ��ַ����&
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//����ȫ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	{
//		int num2 = 0;//�ֲ�����������-���ô��뷶Χ
//		printf("num1=%d num2=%d\n", num1,num2);
//	}
//	return 0;
//}

//#include <stdio.h>
//int global = 2020;//ȫ�ֱ�������������������
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

//ȫ�ֱ�����������-����������������
//#include <stdio.h>
//int main()
//{
//	//extern-�����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//}

//�ֲ�������������-����������ʼ�������������
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
//	const int n = 10;//n�Ǳ������������г����ԣ�����˵n�ǳ�����
//	int arr[10] = { 0 };//��������
//	int arr[n] = { 0 };//error
//	//const int num = 4;//const-������ num-const���εĳ�����
//	//printf("%d\n", num);
//	//3;//���泣��
//	//100;
//	//3.14;
//	return 0;
//}

//#define����ı�ʶ������
//#include <stdio.h>
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//ö�ٳ���
//ö��-һһ�о�
//�Ա��С�Ů������
//#include <stdio.h>
////ö�ٹؼ�-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-ö�ٳ���-���ɱ��ı�
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//��ԭɫ���졢�ơ���
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
