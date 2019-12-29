/*************************************************************************
	> File Name: 047.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月29日 星期日 18时08分54秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 1000000

int prime[max_n + 5] = {0};


void init() {
	for (int i = 2; i <= max_n ;i++) {
		if (prime[i]) continue;
		for (int j = i; j <= max_n; j += i) {
			prime[j] += 1;
		}
	}
	return ;
}

int solve(int n) {
	int ans = 0;
	for	(int i = 2; i <= max_n; i++) {
		int flag = 1;
		for (int j = 0; j < n && flag; j++) {
			flag = (prime[i + j] == n);
		}
		if(flag) return i;
	}
	return -1;
}

int main() {
	init();
	int n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}
