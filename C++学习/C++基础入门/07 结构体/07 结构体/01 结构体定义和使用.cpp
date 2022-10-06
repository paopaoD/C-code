#include<iostream>;
using namespace std;

/*
结构体：
	结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

	语法：struct 结构体名 {结构体成员列表};

	结构体创建变量的三种方式：
		1 struct结构体名 变量名
		2 struct结构体名 变量名 = {成员1值，成员2值...}
		3 定义结构体时顺便创建变量
		
*/

//比如：

// 1 创建学生数据类型 ：学生包括（姓名，年龄，分数）

//定义结构体
struct student			//struct 关键字不能省略
{
	//成员列表
	string name;//姓名
	int age;	//年龄
	int score;	//分数

}stu3;	// 创建方式 3 定义结构体时顺便创建变量



int main1() {

	// 2 通过学生类型创建具体学生

	//结构体变量创建方式 1  struct结构体名 变量名
	struct student stu1;//
	// 或者
	student stu11;//创建变量时，struct关键字可以省略
				  //但是定义时 struct不能省略

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << stu1.name << endl;
	cout << "年龄：" << stu1.age << endl;
	cout << "分数：" << stu1.score << endl;



	//结构体变量创建方式 2 struct结构体名 变量名 = {成员1值，成员2值...}
	struct student stu2 = { "李四",19,90 };

	cout << "姓名：" << stu2.name << endl;
	cout << "年龄：" << stu2.age << endl;
	cout << "分数：" << stu2.score << endl;


	//结构体变量创建方式 3 定义结构体时顺便创建变量

	// s3的创建在结构体后面已经创建过

	stu3.name = "王五";
	stu3.age = 20;
	stu3.score = 80;

	cout << "姓名：" << stu3.name << endl;
	cout << "年龄：" << stu3.age << endl;
	cout << "分数：" << stu3.score << endl;



	system("pause");
	return 0;
}



// 总结：定义结构体时，struct关键字不能省略
// 总结：创建结构体变量时，struct关键字可以省略
// 总结：结构体变量利用操作符 "." 点 访问成员