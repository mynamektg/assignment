#include<iostream>

using namespace std;

void main(){
	int num[5];//5���� ���ڸ� �Է� ���� ���� 
	int i=0; 
	int total,max,min,avg=0;//���� �ִ밪 ��� ���� ���� ����
	int cnt=0;
	for(i=0;i<5;i++)
	{
		cout<<"input "<<i+1<<"th number :";//5���� �Է��� �޴´�
		cin>>num[i];
	}
	min=num[0];//min max�� �ʱ�ȭ
	max=num[0];
	for(cnt=1;cnt<5;cnt++)//min�� detection
	{
		if(num[cnt]<min){
			min=num[cnt];
		}
	}
	for(cnt=1;cnt<5;cnt++)//max�� detection
	{
		if(num[cnt]>min){
			max=num[cnt];
		}
	}
	total=0;
	for(i=0;i<5;i++){//���ձ��ϱ�
		total+=num[i];
	}
	avg=total/5;
	cout<<"minimum :"<<min<<endl;
	cout<<"maximum :"<<max<<endl;
	cout<<"average :"<<avg<<endl;
}