#include<iostream>
using namespace std;

int main4() {

	//��ֵ�����
	cout << "===========��ֵ�����===============" << endl;

	int t = 10;
	t += 1;	// �ȼ��� t = t + 1
	cout << "t = " << t << endl;//11

	t = 10;
	t = 100;
	cout << "t = " << t << endl;//100

	t = 10;
	t -= 2;	// �ȼ��� t = t - 2
	cout << "t = " << t << endl;//8

	t = 10;
	t *= 2;// �ȼ��� t = t * 2
	cout << "t = " << t << endl;//20

	t = 10;
	t /= 2;	// �ȼ��� t = t / 2
	cout << "t = " << t << endl;//5

	t = 10;
	t %= 2;
	cout << "t = " << t << endl;//0



	system("pause");
	return 0;
}