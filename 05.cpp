/*************************************************************************
	> File Name: 05.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 18时36分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int main(){
	int ans=1;
	for(int i=1;i<=20;i++){
		if(ans%i==0)continue;
		ans*=i /gcd(ans, i);
	}
	cout<<ans<<endl;
	return 0;
}
