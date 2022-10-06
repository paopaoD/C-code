#include<iostream>
using namespace std;

int main7() {

	//switch语句
	//	作用：执行多条件分支语句
	//	语法：
	//		switch (表达式) {	//表达式只能是整型或者字符型

	//			case 结果1: 执行语句; break;

	//			case 结果2:执行语句; break;

	//			...

	//			default:执行语句; break;
	//		}


	// 练习：给电影打分

	//1,提示用户给电影评分
	cout << "请给电影打分：" << endl;

	//2,用户进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为:" << score << endl;

	//3,根据分数 提示最后的结果
	switch (score)
	{
	case 10:
		cout << "经典电影" << endl;
		break;	//退出当前分支
	case 9:
		cout << "经典电影" << endl;
		break;	//退出当前分支
	case 8:
		cout << "电影非常好" << endl;
		break;	//退出当前分支
	case 7:
		cout << "电影非常好" << endl;
		break;	//退出当前分支
	case 6:
		cout << "电影一般" << endl;
		break;	//退出当前分支
	case 5:
		cout << "电影一般" << endl;
		break;	//退出当前分支
	default:
		cout << "烂片" << endl;
		break;	//退出当前分支
	}


	// if和switch的区别？
	//	  switch缺点：判断的时候只能是 整型 或者 字符型，不能是一个区间
	//	  switch优点： 结构比较清晰，执行效率高







	system("pause");

	return 0;
}
