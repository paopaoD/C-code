#include<iostream>
using namespace std;

//�ṹ������������
//	���ã����ṹ����Ϊ���������д���

//	���ݵķ�ʽ�����֣�
//		ֵ����
//		��ַ����


//����ѧ���ṹ��
struct student {
	string name;
	int age;
	int score;
};


//��ӡѧ����Ϣ����
	// 1 ֵ����
void printStudent1 (struct student s) 
{
	s.age = 101;	//ֵ����ʱ���ı�ֵ��main������ ����s�����ݲ��ᷢ���仯
	cout << "�Ӻ���1�� ������" << s.name <<" "
		<< "���䣺" << s.age << " "
		<< "������" << s.score << endl;
};

// 2 ��ַ����
void printStudent2(struct student *p) 
{
	p->age = 202;	// ��ַ����ʱ�����ݸı䣬main������ ����s������Ҳ��ı�
	cout << "�Ӻ���2�� ������" << p->name << " "
		<< "���䣺" << p->age << " "
		<< "������" << p->score << endl;
};


int main5() {

	//�����ṹ�����
	struct student s;
	
	s.name = "����";
	s.age = 19;
	s.score = 85;
	

	printStudent1(s);
	printStudent2(&s);//������Ǳ���s�ĵ�ַ

	cout << "main������ ������" << s.name 
		<< " ���䣺" << s.age 
		<< " ������" << s.score << endl;


	//�ܽ᣺�������ı��������е����ݣ�����ֵ���ݣ�������õ�ַ����



	system("pause");
	return 0;
}