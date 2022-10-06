#include<iostream>
using namespace std;

//结构体嵌套结构体

//定义学生结构体
struct student {
	string name;
	int age;
	int score;
};


//定义老师结构体
struct steacher {
	int id;
	string name;
	int age;
	struct student stu;//辅导的学生，所以要先定义学生结构体
};



int main4() {

	// 创建老师
	steacher t;	//
	t.id = 1001;
	t.name = "张三";
	t.age = 50;

	// 学生结构体是嵌套在老师结构体中，所以可以通过 t.stu 访问
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师职工 编号：" << t.id 
		<< "姓名：" 	<< t.name 
		<< "年龄：" << t.age << endl;

	cout << "辅导学生 姓名：" << t.stu.name 
		<< "年龄：" << t.stu.age 
		<< "分数："<<t.stu.score	<< endl;



	// 



	system("pause");
	return 0;
}