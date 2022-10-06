#include<iostream>
using namespace std;

/*
结构体案例1：
	学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
	设计学生和老师的结构体，其中在老师结构体中，有老师姓名和一个存放5名学生的数组作为成员
	学生的成员有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师及学生赋值
	最重打印出老师数据以及老师所带的学生数据

*/


//定义学生结构体
struct student {
	string sName;//学生姓名
	int score;
};


//定义老师结构体
struct teacher {
	string tName;//老师姓名
	struct student sArray[5];//学生数组
};


//赋值函数
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++) 
	{
		tArray[i].tName= "Teacher_";
		tArray[i].tName += nameSeed[i];//姓名组合起来
	
		//通过循环  给每个老师带的5个学生赋值
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			//随机分数 0~60 +40 也就是40~100分区间
			int random = rand() % 61 + 40;	//但是这样只是伪随机  所以要在main函数中加随机数种子
			tArray[i].sArray[j].score = random;
		}
	}
};


//打印信息函数
void printInfo(struct teacher tArray[],int len) 
{
	for (int i = 0; i < len; i++) 
	{
		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) 
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
				<< "分数："<< tArray[i].sArray[j].score << endl;
		}
	}
};


int main7() {

	//随机数种子
	srand((unsigned int)time(NULL));

	// 1 创建3名老师的数组
	struct teacher tArray[3];

	// 2 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	//调用赋值函数
	allocateSpace(tArray, len);


	// 3 打印所有老师及所带的学生信息
	printInfo(tArray, len);


	system("pause");
	return 0;
}