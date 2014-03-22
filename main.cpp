#include<iostream>

using namespace std;

void main(){
	int num[5];//5개의 숫자를 입력 받을 공간 
	int i=0; 
	int total,max,min,avg=0;//총합 최대값 평균 값을 위한 변수
	int cnt=0;
	for(i=0;i<5;i++)
	{
		cout<<"input "<<i+1<<"th number :";//5번의 입력을 받는다
		cin>>num[i];
	}
	min=num[0];//min max값 초기화
	max=num[0];
	for(cnt=1;cnt<5;cnt++)//min값 detection
	{
		if(num[cnt]<min){
			min=num[cnt];
		}
	}
	for(cnt=1;cnt<5;cnt++)//max값 detection
	{
		if(num[cnt]>min){
			max=num[cnt];
		}
	}
	total=0;
	for(i=0;i<5;i++){//총합구하기
		total+=num[i];
	}
	avg=total/5;
	cout<<"minimum :"<<min<<endl;
	cout<<"maximum :"<<max<<endl;
	cout<<"average :"<<avg<<endl;
}