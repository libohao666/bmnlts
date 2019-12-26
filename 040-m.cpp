/*************************************************************************
	> File Name: 040-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月24日 星期二 20时22分45秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

#define max_n 1000000
int ans[max_n + 5] = {0, 0};

void add(int n) {
	int c = floor(log10(n)) + 1;
	while (c--){
		ans[0]++;
		int d = pow(10, c);
		ans[ans[0]]= n / d;
		n = n % d;
	}
}

void print() {
	for(int i = 1; i < 13; i++) {
		cout << ans[i];
	}
	cout << endl;
}

int main() {
	int i = 1;
	while (ans[0] <= 1000000) {
		add(i);
		i++;
	}
	int sum = 1;
	print();
	for(int i = 0; i <= 6; i++) {
		int g = pow(10, i);
		cout << ans[g] << endl;
		sum *= ans[g];
	}
	cout << sum << endl;
	return 0;
}
