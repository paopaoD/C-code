#include<iostream>
using namespace std;

int main4() {

// 3 **�ַ���**���ַ��ͱ���������ʾ�����ַ�		ֻռ��1�ֽ��ڴ�
	//		�﷨��char ch = 'a';
	//		�ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������뵽�洢��Ԫ


		// 3.1�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	// 3.2�ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

	// 3.3�ַ��ͱ�����������
	//char ch2 = "b";	//�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'abc'; // �����ַ��ͱ���ʱ����������ֻ����һ���ַ�

	//3.4�ַ��ͱ�����ӦASCII����
	cout << ch << "�ַ���Ӧ�ı�����" << (int)ch << endl;





// ת���ַ���
	// \n	����
	cout << "hello world\n";

	// \t   tab��	//���ã�����������������
	cout << "hel\tworld" << endl;
	cout << "hell\tworld" << endl;
	cout << "hello\tworld" << endl;

	// \\   ��б��
	cout << "\\" << endl;


	system("pause");
	return 0;
}