#include<iostream>
using namespace std;

//结构体指针
//	  通过指针访问结构体中的成员

//  利用操作符 -> 可以通过结构体指针访问结构体属性


//定义结构体
struct student 
{
	//成员列表
	string name;
	int age;
	int score;
};

int main3() {

	// 创建结构体变量
	struct student stu = { "张三",19,88 };

	// 通过指针指向结构体变量
	struct student* p = &stu;

	//通过指针访问结构体变量中的数据
	
	// 指针访问结构体中的属性，利用 -> 
	p->name;


	cout << "姓名：" << p->name 
		 << "年龄：" << p->age 
		 << "分数：" << p->score << endl;








	system("pause");
	return 0;
}