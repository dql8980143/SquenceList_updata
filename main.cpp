#include "SquenceList.h"

int main()
{
	List sqlist;
	bool key=true;
	int function;
	int n;
	int e;
	int num;
	while(key)
	{
		sqlist.menuDisplay();
		cout<<"请输入想要执行的功能编号function:";
		cin>>function;
		switch(function)
		{
		case 1:
			sqlist.listStart();break;
		case 2:
			cout<<"请输入初始顺序表的数据填充个数num:";
			cin>>num;
			sqlist.fillData(num);break;
		case 3:
			sqlist.disPlay();break;
		case 4:
			cout<<"请输入取值的位置n:";
			cin>>n;
			printf("第%d个数据:%d\n",n,sqlist.getValue(n));
			break;
		case 5:
			cout<<"请输入查找的数据e:";
			cin>>e;
			printf("数据%d的位置:%d\n",e,sqlist.seekValue(e));
			break;
		case 6:
			cout<<"请输入新插入的数据值e:";
			cin>>e;
			cout<<"请输入新插入的数据位置n:";
			cin>>n;
			sqlist.addDate(n,e);
			break;
		case 7:
			cout<<"请输入删除的数据位置:";
			cin>>n;
			sqlist.subData(n,e);
			printf("删除顺序表第%d个数据:%d\n",n,e);
			break;
		case 8:
			sqlist.writeDate();
			break;
		case 9:
			sqlist.readData();
			break;
		default:
			cout<<"输入的功能编号function不合理"<<endl;
		}
		cout<<"是否继续执行其他功能?	输入1-继续	0-退出:"<<endl;
		cin>>key;
		system("cls");
	}

	system("pause");
	return 0;
}