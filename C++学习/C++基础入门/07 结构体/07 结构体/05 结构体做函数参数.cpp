#include<iostream>
using namespace std;

//结构体做函数参数
//	作用：将结构体作为参数向函数中传递

//	传递的方式有两种：
//		值传递
//		地址传递


//定义学生结构体
struct student {
	string name;
	int age;
	int score;
};


//打印学生信息函数
	// 1 值传递
void printStudent1 (struct student s) 
{
	s.age = 101;	//值传递时，改变值，main函数中 变量s的数据不会发生变化
	cout << "子函数1中 姓名：" << s.name <<" "
		<< "年龄：" << s.age << " "
		<< "分数：" << s.score << endl;
};

// 2 地址传递
void printStudent2(struct student *p) 
{
	p->age = 202;	// 地址传递时，数据改变，main函数中 变量s的数据也会改变
	cout << "子函数2中 姓名：" << p->name << " "
		<< "年龄：" << p->age << " "
		<< "分数：" << p->score << endl;
};


int main5() {

	//创建结构体变量
	struct student s;
	
	s.name = "张三";
	s.age = 19;
	s.score = 85;
	

	printStudent1(s);
	printStudent2(&s);//传入的是变量s的地址

	cout << "main函数中 姓名：" << s.name 
		<< " 年龄：" << s.age 
		<< " 分数：" << s.score << endl;


	//总结：如果不想改变主函数中的数据，就用值传递，否则就用地址传递



	system("pause");
	return 0;
}