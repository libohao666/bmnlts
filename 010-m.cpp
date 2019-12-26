/*************************************************************************
	> File Name: 010-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月24日 星期二 18时16分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 2000000

int prime[max_n + 5] = {0};
int ans[500] = {0};

void init() {
	prime[1] = 1;
	for(int i = 2; i <= max_n; i++) {
		if(prime[i]) continue;
		for(int j = 2; j * i <= max_n; j++) {
			prime[j * i] = 1;
		}
	}
}

void solve() {
	init();
	ans[0] = 1;
	for(int i = 1; i < max_n; i++) {
		if(prime[i]) continue;
		ans[1] += i;
		for(int j = 1; j <= ans[0]; j++) {
			if(ans[j] < 10) continue;
			ans[j + 1] += ans[j] / 10;
			ans[j] %= 10;
			ans[0] += (j == ans[0]);
		}
	}
	for(int i = ans[0]; i > 0; i--) {
		cout<< ans[i];
	}
	cout << endl;
}

int main() {
	solve();	
	return 0;
}
