#include<iostream>;
using namespace std;

/*
�ṹ�壺
	�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������

	�﷨��struct �ṹ���� {�ṹ���Ա�б�};

	�ṹ�崴�����������ַ�ʽ��
		1 struct�ṹ���� ������
		2 struct�ṹ���� ������ = {��Ա1ֵ����Ա2ֵ...}
		3 ����ṹ��ʱ˳�㴴������
		
*/

//���磺

// 1 ����ѧ���������� ��ѧ�����������������䣬������

//����ṹ��
struct student			//struct �ؼ��ֲ���ʡ��
{
	//��Ա�б�
	string name;//����
	int age;	//����
	int score;	//����

}stu3;	// ������ʽ 3 ����ṹ��ʱ˳�㴴������



int main1() {

	// 2 ͨ��ѧ�����ʹ�������ѧ��

	//�ṹ�����������ʽ 1  struct�ṹ���� ������
	struct student stu1;//
	// ����
	student stu11;//��������ʱ��struct�ؼ��ֿ���ʡ��
				  //���Ƕ���ʱ struct����ʡ��

	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "������" << stu1.name << endl;
	cout << "���䣺" << stu1.age << endl;
	cout << "������" << stu1.score << endl;



	//�ṹ�����������ʽ 2 struct�ṹ���� ������ = {��Ա1ֵ����Ա2ֵ...}
	struct student stu2 = { "����",19,90 };

	cout << "������" << stu2.name << endl;
	cout << "���䣺" << stu2.age << endl;
	cout << "������" << stu2.score << endl;


	//�ṹ�����������ʽ 3 ����ṹ��ʱ˳�㴴������

	// s3�Ĵ����ڽṹ������Ѿ�������

	stu3.name = "����";
	stu3.age = 20;
	stu3.score = 80;

	cout << "������" << stu3.name << endl;
	cout << "���䣺" << stu3.age << endl;
	cout << "������" << stu3.score << endl;



	system("pause");
	return 0;
}



// �ܽ᣺����ṹ��ʱ��struct�ؼ��ֲ���ʡ��
// �ܽ᣺�����ṹ�����ʱ��struct�ؼ��ֿ���ʡ��
// �ܽ᣺�ṹ��������ò����� "." �� ���ʳ�Ա