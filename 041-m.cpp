/*************************************************************************
	> File Name: 041-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月24日 星期二 20时50分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000
int prime[max_n + 5] = {0};

void init() {
	prime[1] = 1;
	for(int i = 1; i <= max_n; i++) {
		if(prime[i]) continue;
		for(int j = 2; j * i <= max_n; j++) {
			prime[i * j] = 1;
		}
	}
}

int is_val(int n) {
	int num[n + 5];
	while(n){
		int d = n % 10;
		if(d == 0) return 0;
		num[d] = 1;
		cout << d << endl;
		n /= 10;
	}
	return 0;
}

void solve() {
	init();
	for(int i = 1; i <= max_n; i++) {
		if(prime[i]) continue;;

	}
}
int main() {
	is_val(10);
	return 0;
}
