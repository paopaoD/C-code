#include<iostream>
using namespace std;


int main13() {

//continue语句：
//	 在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环


	//只输出100以内的奇数，不输出偶数
	for (int i = 0; i <= 100; i++) 
	{
		if (i %2 ==0)	//如果条件成立，不执行打印，重新循环
		{
			//cout << i << endl;
			continue;	//可以筛选条件，执行到此就不再向下执行
			
		}
		cout << i << endl;
	}












	system("pause");
	return 0;
}