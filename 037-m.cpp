/*************************************************************************
	> File Name: 037-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 19时02分32秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
	prime[1] = 1;
	for(int i = 2; i <= max_n; i++) {
		if(prime[i]) continue;;
		for(int j = 2; j * i <= max_n; j++) {
			prime[j * i] = 1;
		}
	}
}

int is_val(int n) {
	if(prime[n]) return false;
	while (n) {
		int d =pow(10, floor(log10(n)));
		n %= d;
		if(prime[n]) return false;
	}
	return true;
}

int is_val2(int n) {
	while (n) {
		n /= 10;
		if(prime[n])return false;
	}
	return true;
}

int main() {
	init();
	int ans = 0;
	int sum = 0;
	for(int i = 8; i <= max_n; i++) {
		if(is_val(i) && is_val2(i)){
			ans++;
			sum += i;
		}
	}
	cout << ans << endl;
	cout << sum << endl;
	return 0;
}
