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
		cout<<"��������Ҫִ�еĹ��ܱ��function:";
		cin>>function;
		switch(function)
		{
		case 1:
			sqlist.listStart();break;
		case 2:
			cout<<"�������ʼ˳��������������num:";
			cin>>num;
			sqlist.fillData(num);break;
		case 3:
			sqlist.disPlay();break;
		case 4:
			cout<<"������ȡֵ��λ��n:";
			cin>>n;
			printf("��%d������:%d\n",n,sqlist.getValue(n));
			break;
		case 5:
			cout<<"��������ҵ�����e:";
			cin>>e;
			printf("����%d��λ��:%d\n",e,sqlist.seekValue(e));
			break;
		case 6:
			cout<<"�������²��������ֵe:";
			cin>>e;
			cout<<"�������²��������λ��n:";
			cin>>n;
			sqlist.addDate(n,e);
			break;
		case 7:
			cout<<"������ɾ��������λ��:";
			cin>>n;
			sqlist.subData(n,e);
			printf("ɾ��˳����%d������:%d\n",n,e);
			break;
		case 8:
			sqlist.writeDate();
			break;
		case 9:
			sqlist.readData();
			break;
		default:
			cout<<"����Ĺ��ܱ��function������"<<endl;
		}
		cout<<"�Ƿ����ִ����������?	����1-����	0-�˳�:"<<endl;
		cin>>key;
		system("cls");
	}

	system("pause");
	return 0;
}