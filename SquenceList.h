#include <iostream>
#include <string>
#include <Windows.h>
#define MAX 100
using namespace std;

//顺序表的结构体存储类型
struct	list
{
	int *data;//int型指针变量存储动态申请数组空间的起始地址
	int length;//顺序表长度
};

class List
{
private:

	list L;//定义一个顺序表变量L

public:

	void listStart();//顺序表的初始化函数

	void fillData(int num);//顺序表数据初始化函数

	void disPlay()const;//顺序表数据打印函数

	int getValue(int n)const;//顺序表取值函数

	int seekValue(int e)const;//顺序表查找函数

	bool addDate(int n,int e);//顺序表插入数值函数

	bool subData(int n,int &e);//顺序表删除数值函数

	void readData();//文本数据导入新建顺序表

	void writeDate();//顺序表数据存储至文本文件

	void menuDisplay();//顺序表功能菜单

};