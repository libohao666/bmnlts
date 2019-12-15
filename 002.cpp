/*************************************************************************
	> File Name: 002.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时32分33秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

#define max_n 44
#define N 4000000

ll fib[max_n+5]={0};

int main(){
	ll sum = 0;
	fib[1] = 1 ;
	fib[2] = 2 ;
	for(ll i = 3; i <= max_n && fib[i - 1] + fib[i - 2] <= N; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
		if(fib[i] & 1 ) continue;
		sum += fib[i];
	}
	cout<<sum<<endl;
	return 0;
}
