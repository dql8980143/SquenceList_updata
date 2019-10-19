#include "SquenceList.h"

//˳���ĳ�ʼ������
void List::listStart()
{
	cout<<"ִ��˳���ĳ�ʼ������"<<endl;
	L.data=new int[MAX];
	L.length=0;
}

//˳������ݳ�ʼ������
void List::fillData(int num)
{
	cout<<"ִ��˳������ݳ�ʼ������"<<endl;
	listStart();
	int i;
	for(i=0;i<num;i++)
	{
		printf("�������%d������:",i+1);
		scanf("%d",&L.data[i]);
		L.length++;
	}
}

//˳������ݴ�ӡ����
void List::disPlay()const
{
	cout<<"ִ��˳������ݴ�ӡ����"<<endl;
	int i;
	for(i=0;i<L.length;i++)
	{
		printf("��%d������:%d\n",i+1,L.data[i]);
	}
}

//˳���ȡֵ����
int List::getValue(int n)const
{
	cout<<"ִ��˳���ȡֵ����"<<endl;
	if(n<1 || n>L.length)
	{
		printf("ȡֵ��λ��%d������\n",n);
		Sleep(1000);
		exit(1);
	}
	return L.data[n-1];
}

//˳�����Һ���
int List::seekValue(int e)const
{
	cout<<"ִ��˳�����ҹ���"<<endl;
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
		printf("˳����в�����%dֵ\n",e);
		Sleep(1000);
		exit(2);
	}
}

//˳��������ֵ����
bool List::addDate(int n,int e)
{
	cout<<"ִ��˳��������ֵ����"<<endl;
	if(n<1|| n>L.length+1)
	{
		printf("�²�������ݵĲ���λ��%d������\n",n);
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

//˳���ɾ����ֵ����
bool List::subData(int n,int &e)
{
	cout<<"ִ��˳���ɾ����ֵ����"<<endl;
	if(n<1 || n>L.length)
	{
		printf("ɾ�����ݵ�λ��%d������\n",n);
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

//�ı����ݵ����½�˳���
void List::writeDate()
{
	cout<<"ִ���ı����ݵ����½�˳�����"<<endl;
	FILE* fp=fopen("data.txt","w");
	if(!fp)
	{
		cout<<"�ļ�����ʧ��"<<endl;
		Sleep(1000);
		exit(5);
	}
	int i;
	for(i=0;i<L.length;i++)
	{
		fprintf(fp,"��%d������:%d\n",i+1,L.data[i]);
	}
	fclose(fp);
	cout<<"д˳����������ı��ļ��гɹ�"<<endl;
}

//˳������ݴ洢���ı��ļ�
void List::readData()
{
	cout<<"ִ��˳������ݴ洢���ı��ļ�����"<<endl;
	listStart();
	FILE* fp=fopen("data.txt","r");
	if(!fp)
	{
		cout<<"�ļ���ʧ��"<<endl;
		Sleep(1000);
		exit(6);
	}
	int i;
	int e;//�ݴ�����
	do
	{
		fscanf(fp,"��%d������:%d\n",&i,&e);
		L.data[i-1]=e;
		L.length++;
	}while(!feof(fp));
	cout<<"���ı����ݹ���˳���ɹ�"<<endl;
}

//˳����ܲ˵�
void List::menuDisplay()
{
	cout<<"    ˳����ܲ˵�    "<<endl;
	char* p[9]={"1-˳���ĳ�ʼ������","2-˳������ݳ�ʼ������",
		"3-˳������ݴ�ӡ����","4-˳���ȡֵ����","5-˳�����Һ���",
		"6-˳��������ֵ����","7-˳���ɾ����ֵ����","8-�ı����ݵ����½�˳���",
		"9-˳������ݴ洢���ı��ļ�"};
	int i;
	string str(20,'=');
	cout<<str<<endl;
	for(i=0;i<9;i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<str<<endl;
}



