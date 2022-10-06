#include<iostream>
using namespace std;

/*
结构体数组：
	作用：将自定义的结构体放入到数组中方便维护
	语法：struct 结构体名 数组名[元素个数] = {{}，{}...}


*/

//1 定义结构体
struct student {
	//成员列表
	string name;
	int age;
	int score;
};



int main2() {

	// 2 创建结构体数组  并赋值
	struct student stuArry[3] =
	{
		{"张三",19,100},
		{"李四",20,89},
		{"王五",30,88},
	};

	//3 给结构体数组中的元素赋值
	stuArry[2].name = "陈思";
	stuArry[2].age = 25;
	stuArry[2].score = 99;


	// 4 遍历结构体数组
	for (int i = 0; i < 3;i++) {
		cout << "姓名：" << stuArry[i].name 
			 << "年龄：" << stuArry[i].age 
			 << "分数：" << stuArry[i].score << endl;
	}



	system("pause");
	return 0;
}