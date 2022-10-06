#include<iostream>
using namespace std;

/*
�ṹ�尸��1��
	ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ���������£�
	���ѧ������ʦ�Ľṹ�壬��������ʦ�ṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
	ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��ѧ����ֵ
	���ش�ӡ����ʦ�����Լ���ʦ������ѧ������

*/


//����ѧ���ṹ��
struct student {
	string sName;//ѧ������
	int score;
};


//������ʦ�ṹ��
struct teacher {
	string tName;//��ʦ����
	struct student sArray[5];//ѧ������
};


//��ֵ����
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++) 
	{
		tArray[i].tName= "Teacher_";
		tArray[i].tName += nameSeed[i];//�����������
	
		//ͨ��ѭ��  ��ÿ����ʦ����5��ѧ����ֵ
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			//������� 0~60 +40 Ҳ����40~100������
			int random = rand() % 61 + 40;	//��������ֻ��α���  ����Ҫ��main�����м����������
			tArray[i].sArray[j].score = random;
		}
	}
};


//��ӡ��Ϣ����
void printInfo(struct teacher tArray[],int len) 
{
	for (int i = 0; i < len; i++) 
	{
		cout << "��ʦ������" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) 
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName
				<< "������"<< tArray[i].sArray[j].score << endl;
		}
	}
};


int main7() {

	//���������
	srand((unsigned int)time(NULL));

	// 1 ����3����ʦ������
	struct teacher tArray[3];

	// 2 ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	//���ø�ֵ����
	allocateSpace(tArray, len);


	// 3 ��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);


	system("pause");
	return 0;
}