#include<iostream>
using namespace std;

/*
	constʹ�ó�����
		���ã���const��ֹ�����
	
*/



//����ѧ���ṹ��
struct student {
	string name;
	int age;
	int score;
};

// �����ӡѧ����Ϣ����
//void printStudent(student stu) 
//{
//	//������ֵ���ݣ�
//	//	sut.age = 100; //��ӡ��Ϣʱ�޸����ݣ�����main�����е����ݲ���䣬
//					  //���Ǵ��ݵĹ����У����ں����и�����һ��ѧ����Ϣ��
//					  //��ѧ����Ϣ����֮�󣬻�ռ���ڴ�	
//	cout << "������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;
//
//};


				//const��ʹ�ó���
void printStudent( const student *stu) //const���Σ���ֹ��ֹ����� �ı���stu������
{
	//�����ǵ�ַ���ݣ�ֻ���ݵ�ַ����ʡ�ڴ�
	//stu->age = 202;//�����޸�����֮��main����������Ҳ�ᷢ���ı䣬����Ҫ��const���Σ���ֹ�����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

};



int main6() {

	//����ѧ������
	struct student stu = { "����",20,89 };

	//���ô�ӡѧ����Ϣ����
	//printStudent(stu);
	printStudent(&stu);


	system("pause");
	return 0;
}