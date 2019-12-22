/*************************************************************************
	> File Name: 035.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 16时20分52秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5]= {0};

void init() {
	prime[1] = 1;
	for (int i = 2; i <= max_n; i++) {
		if (prime[i]) continue;
		for (int j = 2; j * i <= max_n; j++) {
			prime[j * i] = 1;
		}
	}
}
int x(int n);
int f(int n);
int is_val(int n) {
	for (int i = 0; i <= x(i); i++) {
		if (prime[n]) return 0;
		n = f(n);
	}
	return 1;
}

int f(int n) {
	return n / 10 + n % 10 * pow(10,floor(log10(n)));
}

int x(int n) {
	int cnt = 0;
	while (n) {
		cnt++;
		n /= 10;
	}
	return cnt;
}

int main() {
	init();
	int ans = 0;
	for(int i = 1; i < max_n; i++) {
		if(!prime[i]){
			if(is_val(i)){
				ans++;
				//cout<<i<<" ";
			}
		}
	}
	cout << ans << endl;
	return 0;
}
