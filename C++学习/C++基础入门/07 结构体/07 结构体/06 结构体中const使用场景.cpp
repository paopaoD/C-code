#include<iostream>
using namespace std;

/*
	const使用场景：
		作用：用const防止误操作
	
*/



//定义学生结构体
struct student {
	string name;
	int age;
	int score;
};

// 定义打印学生信息函数
//void printStudent(student stu) 
//{
//	//这样是值传递，
//	//	sut.age = 100; //打印信息时修改数据，但是main函数中的数据不会变，
//					  //但是传递的过程中，是在函数中复制了一份学生信息，
//					  //当学生信息多了之后，会占用内存	
//	cout << "姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
//
//};


				//const的使用场景
void printStudent( const student *stu) //const修饰，防止防止误操作 改变量stu的数据
{
	//这样是地址传递，只传递地址，节省内存
	//stu->age = 202;//但是修改数据之后，main函数中数据也会发生改变，所以要用const修饰，防止误操作
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

};



int main6() {

	//创建学生变量
	struct student stu = { "李四",20,89 };

	//调用打印学生信息函数
	//printStudent(stu);
	printStudent(&stu);


	system("pause");
	return 0;
}