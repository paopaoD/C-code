#include<iostream>
using namespace std;

//�ṹ��Ƕ�׽ṹ��

//����ѧ���ṹ��
struct student {
	string name;
	int age;
	int score;
};


//������ʦ�ṹ��
struct steacher {
	int id;
	string name;
	int age;
	struct student stu;//������ѧ��������Ҫ�ȶ���ѧ���ṹ��
};



int main4() {

	// ������ʦ
	steacher t;	//
	t.id = 1001;
	t.name = "����";
	t.age = 50;

	// ѧ���ṹ����Ƕ������ʦ�ṹ���У����Կ���ͨ�� t.stu ����
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦְ�� ��ţ�" << t.id 
		<< "������" 	<< t.name 
		<< "���䣺" << t.age << endl;

	cout << "����ѧ�� ������" << t.stu.name 
		<< "���䣺" << t.stu.age 
		<< "������"<<t.stu.score	<< endl;



	// 



	system("pause");
	return 0;
}