#include<iostream>
using namespace std;

int main9() {

/*do...whileѭ��					--->��ִ�� ���ж�
	���ã�����ѭ��������ִ��ѭ�����
	�﷨��do{ѭ�����} while(ѭ������)
	ע�⣺��while����������do...while����ִ��һ��ѭ����䣬���ж�����

*/

	// ��ӡ0-9��10������
	int num = 0;

	do {	//��ִ����䣬Ȼ�����ж�
		cout <<"num = "<< num << endl;
		num++;
	} 
	while (num < 10);



	//do...while��while������
	//	do...while:��ִ��ѭ�����   ���ж�����
	//	while	  :���ж�����   ��ִ�����


	cout << "===========ˮ�ɻ���==============" << endl;

	//��ϰ������ˮ�ɻ���
	//  ˮ�ɻ�����ָһ����λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������
	//	���磺1^3+5^3+3^3 = 153

	int num1 = 100;

	// do...whileд����
	do {
		//��������λ�������ҵ�ˮ�ɻ���
		int a = 0;
		int b = 0;
		int c = 0;
		a = num1 % 10;		//��λ
		b = num1 / 10 % 10;	//ʮλ
		c = num1 / 100;		//��λ

		if(a*a*a + b*b*b + c*c*c == num1) {
			cout <<"dowhileд��ˮ�ɻ�����" << num1 << endl;
		}
		num1++;
	} 
	while (num1 < 1000);



	//// whileд��
	//while (num1 < 1000) {

	//	//��������λ�������ҵ�ˮ�ɻ���
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;
	//	a = num1 % 10;		//��λ
	//	b = num1 / 10 % 10;	//ʮλ
	//	c = num1 / 100;		//��λ

	//	if (a * a * a + b * b * b + c * c * c == num1) {
	//		cout <<"whileд��ˮ�ɻ�����"<< num1 << endl;
	//	}

	//	num1++;
	//}





	system("pause");
	return 0;
}