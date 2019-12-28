/*************************************************************************
	> File Name: 024-m-1.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 19时10分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
	int ret = 1;
	for(int i = 1; i <=n ;i++) {
		ret *= i;
	}
	return ret;
}

void print(int n, int k) {
	int num[n + 5];
	for (int i = 0; i < n; i++) num[i] = i;
	int i = n;
	while (i >= 0) {
		if (f(i - 1) <= k) {
			int flag = 1;
			int d = k / f(i - 1);
			k %= f(i - 1);
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if (num[j] != -1)cnt++;
				if(cnt == d + 1 && num[j] != -1){
					cout << num[j];
					num[j] = -1;
				}
			}
		}
		else {
			int flag = 1;
			for(int j = 0; j < n && flag; j++) {
				if(num[j] != -1) {
					cout << num[j];
					num[j] = -1;
					flag = 0;
				}
			}
		}
		i--;
	}
	return ;
}
int main() {
	int n,k;
	print(10, 1000000);
	//while(cin >> n >> k) print(n, k - 1);
	return 0;
}
