/*************************************************************************
	> File Name: 030-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 19时51分28秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 354294
int is_val(int n){
	int x=n,tmp=0;
	while(x){
		tmp+=(int)pow(x%10,5);
		x/=10;
	}
	return tmp==n;
}
int f(int n){
	return n*(pow(9,5));
}
int main(){
	cout<<f(6)<<endl;
	int sum=0;
	for(int i=2;i<=max_n;i++) {
		if(is_val(i))sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
