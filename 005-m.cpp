/*************************************************************************
	> File Name: 005-m.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 16时01分50秒
 ************************************************************************/

#include<iostream>

using namespace std;

int prime[]={2,3,5,7,9,11,13,17,19};
int a[20]={0};

int main(){
	for(int i=2;i<=20;i++){
		cout<<"i"<<i<<endl;
		int res[20]={0};
		for(int j=0;j<9;j++){
			//cout<<"j"<<j<<" "<<prime[j]<<endl;
			while(i%prime[j]==0){
				res[prime[j]]++;
				i/=prime[j];
			}
		}
		for(int j=0;j<20;j++){
			if(res[j]>a[j])a[j]=res[j];
		}
	}
	for(int i=0;i<20;i++){
		cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}
