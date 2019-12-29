/*************************************************************************
	> File Name: 046-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月29日 星期日 16时04分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int prime[max_n + 5] = {0};

void init() {
	prime[1] = 1;
	for(int i = 2; i <= max_n ;i++) {
		if(prime[i]) continue;
		for(int j = 2; j * i <= max_n; j++) {
			prime[j * i] = 1;
		}
	}
}

void solve() {
	for(int i = 3; i < max_n; i += 2) {
		if(!prime[i]) continue;
		if()
	}
}

int main() {
	init();
	return 0;
}
