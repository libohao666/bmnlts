/*************************************************************************
	> File Name: 039.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月29日 星期日 15时04分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 1000

int cnt[max_n + 5] = {0};

int gcd(int a, int b) {
	return (b ? gcd(b, a % b) : a);
}

int main() {
	for(int n = 1; n <= 32; n++) {
		for(int m = n + 1; m <= 32; m++) {
			if(gcd(m, n) - 1) continue;
			int a = m * m - n * n;
			int b = 2 * m * n;
			int c = m * m + n * n;
			for(int p = a + b + c; p <= 1000; p += (a + b + c)) {
				cnt[p] += 1;
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= max_n; i++) {
		if(cnt[i] > cnt[ans]) ans = i;
	}
	cout << ans << endl;
	return 0;
}
