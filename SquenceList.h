#include <iostream>
#include <string>
#include <Windows.h>
#define MAX 100
using namespace std;

//˳���Ľṹ��洢����
struct	list
{
	int *data;//int��ָ������洢��̬��������ռ����ʼ��ַ
	int length;//˳�����
};

class List
{
private:

	list L;//����һ��˳������L

public:

	void listStart();//˳���ĳ�ʼ������

	void fillData(int num);//˳������ݳ�ʼ������

	void disPlay()const;//˳������ݴ�ӡ����

	int getValue(int n)const;//˳���ȡֵ����

	int seekValue(int e)const;//˳�����Һ���

	bool addDate(int n,int e);//˳��������ֵ����

	bool subData(int n,int &e);//˳���ɾ����ֵ����

	void readData();//�ı����ݵ����½�˳���

	void writeDate();//˳������ݴ洢���ı��ļ�

	void menuDisplay();//˳����ܲ˵�

};