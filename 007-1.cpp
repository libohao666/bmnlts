/*************************************************************************
	> File Name: 007-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 18时51分36秒
 ************************************************************************/

#include<iostream>
#include<inttypes.h>
using namespace std;

#define max_n 200000

int prime[max_n + 5] = {0};




void init(){
	for(int64_t i = 2; prime[0] < 10001 ;i++) {
		if(prime[i]) continue;
		prime[++prime[0]] = i;
		for(int64_t j = i * i;j <= max_n; j += i) {
			prime[j] = 1;
		}
		
	}
}
int main(){
	init();
	cout<<prime[10001]<<endl;
	return 0;
}
