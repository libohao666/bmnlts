/*************************************************************************
	> File Name: 035-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 18时53分47秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
	prime[1] = 1;
	for(int i = 2; i <= max_n; i++) {
		if(prime[i])continue;
		for(int j = 2; j * i <= max_n; j++) {
			prime[j * i] = 1;
		}
	}
}

int is_val(int n) {
	if(prime[n])return false;
	int d = pow(10, floor(log10(n)));
	int w = floor(log10(n)) + 1;
	int x = n;
	for(int i = 0; i < w; i++) {
		x = x / 10 + x % 10 * d;
		if(prime[x]) return false;
	}
	return true;
}

int main() {
	init();
	int ans = 0;
	for(int i = 1; i <= max_n; i++) {
		if(is_val(i)) { 
			ans++;
			cout << i << endl;
		}
	}
	cout << ans << endl;
	return 0;
}
