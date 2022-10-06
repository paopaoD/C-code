#include<iostream>
using namespace std;

/*
设计一个英雄的结构体，包括姓名，年龄，性别；
创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，
最终打印排序后的结果
*/

// 定义英雄的结构体
struct Hero {
	string name;
	int age;
	string sex;
};

//定义冒泡排序函数
void bubbleSort(struct Hero heroArry[],int len) 
{
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArry[j].age > heroArry[j + 1].age) {
				struct Hero temp = heroArry[j];
				heroArry[j] = heroArry[j + 1];
				heroArry[j + 1] = temp;
			}
		}
	}
};

//定义打印信息函数
void printHero(struct Hero heroArry[], int len) {
	for (int i = 0; i < len; i++) {
		cout << " 姓名：" << heroArry[i].name
			 << " 年龄：" << heroArry[i].age
			 << " 性别：" << heroArry[i].sex << endl;
	}
};



int main() {

	// 1 创建英雄数组
	struct Hero heroArray[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	//数组长度
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//排序前打印
	cout << "排序前：" << endl;
	for (int i = 0; i < len; i++) {
		cout << " 姓名：" << heroArray[i].name
			<< " 年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}

	// 2 冒泡排序
	bubbleSort(heroArray, len);	//调用函数

	//排序前打印
	cout << "排序后：" << endl;

	// 3 打印排序后的结果
	printHero(heroArray, len);	//调用函数


	system("pause");
	return 0;
}