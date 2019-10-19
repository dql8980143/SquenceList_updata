#include "SquenceList.h"

//顺序表的初始化函数
void List::listStart()
{
	cout<<"执行顺序表的初始化功能"<<endl;
	L.data=new int[MAX];
	L.length=0;
}

//顺序表数据初始化函数
void List::fillData(int num)
{
	cout<<"执行顺序表数据初始化功能"<<endl;
	listStart();
	int i;
	for(i=0;i<num;i++)
	{
		printf("请输入第%d个数据:",i+1);
		scanf("%d",&L.data[i]);
		L.length++;
	}
}

//顺序表数据打印函数
void List::disPlay()const
{
	cout<<"执行顺序表数据打印功能"<<endl;
	int i;
	for(i=0;i<L.length;i++)
	{
		printf("第%d个数据:%d\n",i+1,L.data[i]);
	}
}

//顺序表取值函数
int List::getValue(int n)const
{
	cout<<"执行顺序表取值功能"<<endl;
	if(n<1 || n>L.length)
	{
		printf("取值的位置%d不合理\n",n);
		Sleep(1000);
		exit(1);
	}
	return L.data[n-1];
}

//顺序表查找函数
int List::seekValue(int e)const
{
	cout<<"执行顺序表查找功能"<<endl;
	int i;
	bool Key=false;;
	for(i=0;i<L.length;i++)
	{
		if(L.data[i]==e)
		{
			Key=true;
			break;
		}
	}
	if(Key)
	{
		return (i+1);
	}
	else
	{
		printf("顺序表中不存在%d值\n",e);
		Sleep(1000);
		exit(2);
	}
}

//顺序表插入数值函数
bool List::addDate(int n,int e)
{
	cout<<"执行顺序表插入数值功能"<<endl;
	if(n<1|| n>L.length+1)
	{
		printf("新插入的数据的插入位置%d不合理\n",n);
		Sleep(1000);
		exit(3);
	}
	int i;
	for(i=L.length-1;i>=n-1;i--)
	{
		L.data[i+1]=L.data[i];
	}
	L.data[n-1]=e;
	L.length++;
	return true;
}

//顺序表删除数值函数
bool List::subData(int n,int &e)
{
	cout<<"执行顺序表删除数值功能"<<endl;
	if(n<1 || n>L.length)
	{
		printf("删除数据的位置%d不合理\n",n);
		Sleep(1000);
		exit(4);
	}
	e=L.data[n-1];
	int i;
	for(i=n;i<L.length;i++)
	{
		L.data[i-1]=L.data[i];
	}
	L.length--;
	return true;
}

//文本数据导入新建顺序表
void List::writeDate()
{
	cout<<"执行文本数据导入新建顺序表功能"<<endl;
	FILE* fp=fopen("data.txt","w");
	if(!fp)
	{
		cout<<"文件创建失败"<<endl;
		Sleep(1000);
		exit(5);
	}
	int i;
	for(i=0;i<L.length;i++)
	{
		fprintf(fp,"第%d个数据:%d\n",i+1,L.data[i]);
	}
	fclose(fp);
	cout<<"写顺序表数据至文本文件中成功"<<endl;
}

//顺序表数据存储至文本文件
void List::readData()
{
	cout<<"执行顺序表数据存储至文本文件功能"<<endl;
	listStart();
	FILE* fp=fopen("data.txt","r");
	if(!fp)
	{
		cout<<"文件打开失败"<<endl;
		Sleep(1000);
		exit(6);
	}
	int i;
	int e;//暂存数据
	do
	{
		fscanf(fp,"第%d个数据:%d\n",&i,&e);
		L.data[i-1]=e;
		L.length++;
	}while(!feof(fp));
	cout<<"读文本数据构成顺序表成功"<<endl;
}

//顺序表功能菜单
void List::menuDisplay()
{
	cout<<"    顺序表功能菜单    "<<endl;
	char* p[9]={"1-顺序表的初始化函数","2-顺序表数据初始化函数",
		"3-顺序表数据打印函数","4-顺序表取值函数","5-顺序表查找函数",
		"6-顺序表插入数值函数","7-顺序表删除数值函数","8-文本数据导入新建顺序表",
		"9-顺序表数据存储至文本文件"};
	int i;
	string str(20,'=');
	cout<<str<<endl;
	for(i=0;i<9;i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<str<<endl;
}



