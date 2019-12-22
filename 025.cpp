/*************************************************************************
	> File Name: 025.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 14时10分18秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int f[3][1005];

int main() {
	int n = 2;
	f[1][0] = 1;
	f[1][1] = 1;
	f[2][0] = 1;
	f[2][1] = 1;
	while (f[n % 3][0] < 1000) {
		n += 1;
		int *a = f[n % 3], *b = f[(n -1 ) % 3], *c = f[(n - 2) % 3];
		for(int i = 1; i <= b[0]; i++) {
			a[i] = b[i] + c[i];
		}
		a[0] = b[0];
		for(int i = 1; i <= a[0]; i++) {
			if(a[i] < 10) continue;
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
			a[0] += (i == a[0]);
		}
	}
	printf("%d\n", n);
	return 0;
}
