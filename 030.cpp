/*************************************************************************
	> File Name: 030.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 19时33分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;
int f1(int n){
	return n*9*9*9*9*9;
}
int f2(int n){
	int ret=1;
	for(int i=0;i<n-1;i++){
		ret*=10;
	}
	return ret;
}

ll f5(int n){
	return n*n*n*n*n;
}

bool f3(int n){
	int tmp=n;
	int res=0;
	while(n){
		res+=f5(n%10);
	}
	return res==tmp;
}

int main(){
	/*
	for(int i=1;i<=10;i++){
		if(f1(i)<f2(i)){
			return 0;
		}
		else{
			cout<<i<<endl;
		}
	}
	*/
	int ans=0;
	for(int i=2;i<=f1(6);i++){
		if(f3(i))ans+=i;
	}
	cout<<ans<<endl;
	return 0;
}
