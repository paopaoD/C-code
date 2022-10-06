#include<iostream>
using namespace std;

/*
���һ��Ӣ�۵Ľṹ�壬�������������䣬�Ա�
�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰������������������
���մ�ӡ�����Ľ��
*/

// ����Ӣ�۵Ľṹ��
struct Hero {
	string name;
	int age;
	string sex;
};

//����ð��������
void bubbleSort(struct Hero heroArry[],int len) 
{
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArry[j].age > heroArry[j + 1].age) {
				struct Hero temp = heroArry[j];
				heroArry[j] = heroArry[j + 1];
				heroArry[j + 1] = temp;
			}
		}
	}
};

//�����ӡ��Ϣ����
void printHero(struct Hero heroArry[], int len) {
	for (int i = 0; i < len; i++) {
		cout << " ������" << heroArry[i].name
			 << " ���䣺" << heroArry[i].age
			 << " �Ա�" << heroArry[i].sex << endl;
	}
};



int main() {

	// 1 ����Ӣ������
	struct Hero heroArray[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	//���鳤��
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//����ǰ��ӡ
	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++) {
		cout << " ������" << heroArray[i].name
			<< " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}

	// 2 ð������
	bubbleSort(heroArray, len);	//���ú���

	//����ǰ��ӡ
	cout << "�����" << endl;

	// 3 ��ӡ�����Ľ��
	printHero(heroArray, len);	//���ú���


	system("pause");
	return 0;
}