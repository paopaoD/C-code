#include<iostream>
using namespace std;

int main6() {

	//��Ŀ�����

	//������������ a b c 
	// ��a��b���Ƚϣ����������ֵ��ֵ��c

	int a = 10;
	int b = 20;
	int c = 0;

	//��Ŀ�����
	c = (a > b ? a : b);  //���a>b����������a��ֵ������ ����b

	cout << "c = " << c << endl;//20  

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	// ���磺
	(a > b ? a : b) = 100;//���a>b��������ô����b Ҳ����b=100
	//���a>b����������ô����a ����a=100

	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//100



	system("pause");
	return 0;

}