#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 

//����bug
//��bug������

//�ṹ��
//�ṹ������һ��������϶��ɵ�һ���µ��������ͣ���ɽṹ�����ݵ�ÿ�����ݳ�Ϊ�ṹ�����ݵġ���Ա��
//���������ٴ�������
//struct stu//stu�ṹ���ǩ //�ṹ������
//{
//	char name[20] ;//member-list��Ա�б�
//	short age ;
//	char tele[12];
//	char set[5] ;
//
//}s1 ,s2 ,s3;//variable-list;�����б� //s1,s2,s3��ȫ�ֱ���
//
//


// ����һ��ѧ��-һЩ����
// ����
// ����
// �绰
// �Ա�

////struct �ṹ��ؼ��� Stu - �ṹ���ǩ  struct Stu - �ṹ������
//typedef struct stu//typedef �������ṹ���������
//{
//	char name[20] ;//member-list��Ա�б�
//	short age ;
//	char tele[12];
//	char set[5] ;
//
//}stu;//stu�����ͣ�struct stuҲ�ǣ� 
//int main()
//{
//	struct stu s1 ; //�������ڴ����ṹ����� - �ֲ�����
//	stu s2 ;
//	return 0 ;
//}

//struct S
//{
//	int a ;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s; //struct Sֻ�����ͣ���������Ҫ�б�������
//	char *pc ;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe",{100, 'w', "hello world!", 3.14}, arr};
//
//	printf("%s\n",t.ch); //hehe
//	printf("%d\n",t.s.a); //100
//	printf("%lf\n",t.s.arr); //hello world!
//	printf("%s\n",t.pc); //hello bit
//
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20] ;
//	short age ;
//	char tele[12];
//	char sex[5] ;
//
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n",ps->name);
//	printf("age: %d\n",ps->age);
//	printf("tele: %s\n",ps->tele);
//	printf("sex: %s\n",ps->sex);
//}
//int main()
//{
//	Stu s = {"����", 40, "15599887788","��"};
//	//��ӡ�ṹ������
//	//Print1��Print2�ĸ��ã�
//	Print1(s);
//
//	//ѡ��Print2����
//	// ���ݵ��ǽṹ����ʱ����Ҫ���⿪��һ��ռ�
//	//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//	//�������һ���ṹ�Զ����ʱ�����ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//
//	Print2(&s); //���ݵ��ǽṹ��ĵ�ַ
//	//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ݽṹ��ĵ�ַ��
//	return 0 ;
//}


//�ڴ�ķ�����ջ������������̬��
//ջ�����ֲ���������������ʽ��������������Ҳ���ٿռ�
//��������̬�ڴ���䡢malloc/free(��Ҫ�ֶ��ͷſռ�)��realloc/calloc
//��̬����ȫ�ֱ�������̬����

//��ջ������
//ѹջ����
//���ݽṹ
//----�������ݽṹ
//˳��� 1 2 3 4 5 6���������д�������֣���Ϊ˳���
//����1....6�������ҵطֲ����ڴ��У�������ͨ��һ����������������Ϊ����
//ջ��
//0 1 2 3 4�����Ⱥ�ķ���һ��
//����һ��Ԫ�أ�ѹջ
//ɾ��һ��Ԫ�أ���ջ
//ջ���Ƚ������������ȳ�

//����
//----�������ݽṹ
//������
//----ͼ


//#include<math.h>
//int Is_count(int i )
//{
//	int a = 0;
//	int count = 1;
//	for(a = 2 ; a <= sqrt(i) ; a++) //���������� a < i Ҳ������ a <= i/2 Ҳ������ a <= sqrt(i)
//	{
//		if(i % a == 0)
//			count = 0;
//	}
//	return count ;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 2 ; i<=1000 ; i++)
//	{
//		if(Is_count(i) == 1)
//		{
//			printf("%d ",i);
//			count ++;
//		}
//	}
//	printf("\nһ���У�%d������",count);
//	return 0 ;
//}


int main()
{

	return 0;
}