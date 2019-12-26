/*************************************************************************
	> File Name: 012.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月26日 星期四 19时49分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) {
				int a = i, cnt = 0;
				while (i % prime[j] == 0) {
					a /= prime[j];
					cnt++;
				}
				f[i * prime[j]] =f[i] / (cnt + 1) * (cnt + 2);
				break;
			}
			else {
				f[i * prime[j]] = f[prime[j]] * f[i];		
			}
		}
	}
}

int main() {
	init();
	return 0;
}
