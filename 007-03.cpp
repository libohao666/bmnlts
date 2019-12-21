/*************************************************************************
	> File Name: 007-03.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 20时59分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 200000

int prime[max + 5] = {0};

void init() {
	for (int i = 2; i <= max; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] * i <= max; j++) {
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int main() {
	init();
	cout << prime[10001];
}

