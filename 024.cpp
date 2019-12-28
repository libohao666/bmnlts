/*************************************************************************
	> File Name: 024.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 19时19分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 10

int fac[max_n];
int num[max_n] = {0};

void init(int n) {
	fac[0] = 1;
	for(int i = 1; i <= n; i++) {
		fac[i] = i * fac[i - 1];
	}
	return ;
}

int get_num(int k, int n, int &x) {
	int step = k / n, t = 0;
	x = 0;
	for(int t = 0; t <= step; x += (t <= step)) {
		t += num[x];
	}
	x = t;
	k %= n;
	num[x] = 0;
	return k;
}

int main() {
	init(max_n);
	int k = 1000000 -1;
	for(int i = max_n; i >= 0; i--) {
		int x;
		k = get_num(k, fac[i - 1], x);
		cout << x;
	}
	cout << endl;
	return 0;
}


