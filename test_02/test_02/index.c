#define _CRT_SECURE_NO_WARNINGS  // ȥ���澯,������ԭ�ļ���һ��

#include <stdio.h> // ����ͷ�ļ�
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
//	// 3; // ���泣��
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

// scanf C�����ṩ,��Ҫʹ��vs�ṩ��scanf_s, Ҫ��֤����Ŀ�ƽ̨����

// ����
// 3; // ���泣��
// const ���εĳ�����  (������) const num = 1; const int num = 4; // num�Ǳ���,���г�����,num�ǳ�����
// #define ����ı�ʶ������  #define MAX 10;
// ö�ٳ��� �Ա�:��,Ů  ö�ٹؼ��� enum;  enum Sex {}


// �ַ���  �������������ַ�
// �ַ����Ľ�����־��һ��\0��ת���ַ�,�������ַ������ݺͳ��� 'abc \0'
// ASCII ���� A65  a97
// strlen() �����ַ�������
//int main()
//{	
//	char arr1[] = "abc"; // ֱ��д��˫����
//	char arr2[] = { 'a', 'b', 'c', '\0'}; // ���ַ������������� '\0' ������־, ���ַ�ʽ��,���û�н�����־,���Ƚ��������
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	printf("%c\n", '\x61');
//	return 0;
//}

// ת���ַ�     \ת���,���ַ�ת����˼,������߱��ԭ������˼
// \n ���з�  ����һ���ַ�
// \t ˮƽ�Ʊ���
// \\t ��ˮƽ�Ʊ����е�\ ת��Ϊԭ������ͨ�ַ�\
// \ddd ��ʾ1-3���˽�����, ת����ʮ������������Ӧ��ASCII��ֵ  ��\32 ת��ʮ��������Ϊ26,ASCII�ж�Ӧ�������ҵļ�ͷ  ����һ���ַ�
// \xdd ��ʾ2��ʮ�������� --    \x61 ---> a  һ���ַ�


// �ж����
// ѭ�����

// ����
//int Add(int x, int y)
//{
//	return x + y;
//}


// ����
//int main() {
//	int arr[10]; // ����һ�����10���������ֵ�����
//	int arr2[10] = { 10,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	printf("%d\n", arr2[4]);    // ����ĳһ����Ҫ���±�
//
//	// ��ӡȫ������Ҫ����
//	while (i < 10)
//	{
//		printf("%d\n", arr2[i]);
//		i++;
//	}
//	return 0;
//}

// ������ + - * / %
// ��λ������ <<����1��������λ(��߶���,�ұ߲���)       >>����һ��������λ

// (������)λ������
// &��λ��
// |��λ��
// ^��λ��� ��Ӧ�Ķ�����λ��ͬΪ0, ������Ϊ1

// ��ֵ =   +=...���ϸ�ֵ��
// �ж� ==

// ��Ŀ������ 1��������  !�߼������� -��  sizeof�����������������ռ�ռ�Ĵ�С ��λ���ֽ�  �����С/һ��Ԫ�صĴ�С = ����
//                       ~��λȡ�� int a = 0; int b = ^a;  �õ���bΪ -1    ����++ ��ʹ��,��++, ǰ��++ ��++,��ʹ��   (����)ǿ������ת��
//  ԭ��, ����, ����
//int main()
//{
//	int a = (int) 3.14;  //double ��������ǿ��ת��Ϊint����;�����澯
//	printf("%d\n", a);
//	return 0;
//}
// �����Զ����Ʋ������ʽ�洢 
// 
// 
// ˫Ŀ������ ������������
// && ;�߼���  || �߼���   ��js�еĽ����ͬ  3&&5  �߼���ʱ,�õ��Ľ��Ϊ1,�߼���ʱ,�õ��Ľ��Ϊ0
// 
// ��Ŀ������ exp1? exp2:exp3

// ���ű���ʽ exp,exp2,exp3,exp4...

// & * . ->


// -1, 1 �з�����,�ڴ��д洢,���λ�Ƿ���λ(����1�����Ǹ���,0����������)
// int = signed int, signed��ʡ�Ե���,int����ı����з���
// unsigned int �����޷��ű���

// ����ԭ,��,����
// ԭ��,ֱ��д���Ķ���������
// ����,ԭ��ķ���λ����,����λ��λȡ���õ�
// ����, ����+1

// �ؼ���
// auto �ֲ�����-->�Զ�����, �Զ�����,�Զ�����  �ֲ�����ǰ�涼ʡ����auto
// break ,case, char const continue, default , do,  double, else,  enum, extern, float, for, goto, if, int, long, register(�Ĵ����ؼ���)
// return short  signed sizeof static struct(�ṹ��ؼ���) switch typedef union(������,������)  unsigned  void volatile while�ȵ�
// ע��: ���������ܺ͹ؼ�������
// typedef���Ͷ���,�����ض��� Ϊ�������¶������� typedef unsigned int u_int
// static int a = 1; // static ����֮�� a��һ����̬�ľֲ�����,ʹ�ֲ��������������ڱ䳤    ����,ȫ�ֱ���,�ı�������,ֻ�����Լ��ļ��ڲ�ʹ��
// static ���κ��� extern int Add(int, int) �÷��������޸ı���, �ı��˺�������������  �ⲿ��������-->�ڲ���������
// #define MAX 10 �����ʶ������  �����---���в���  #define MAX(X,Y) (X>Y?X:Y)

// ����� �洢����
// �Ĵ��� register int a = 10; �����a����ɼĴ�������
// ���ٻ���
// �ڴ�
// Ӳ��

// ָ��
// �ڴ�: 1byte һ����Ԫ
// &a ȡ��ַa
// int* p = &a; ��һ��ר��������ŵ�ַ�ı���,����ָ����� ����Ϊ int*
// *p // *--�����ò�����  *p = 20;  ��ʱ,p��ŵĵ�ַ��Ӧ�ı���a��ͨ���޸ĵ�ַ�ڵ�����,�����¸�ֵΪ20
// ָ���С, ��32λ �� 32bit = 4byte  ��64λ �� 64bit = 8byte