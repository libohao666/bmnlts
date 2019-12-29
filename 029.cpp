/*************************************************************************
	> File Name: 029.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月29日 星期日 14时15分03秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
using namespace std;

#define max_n 10000
#define max_m 210

int *result[max_n + 5] = {0};
int result_len = 0;

int find_result(int *num) {
	for (int i = 0; i < result_len; i++) {
		if (memcmp(result[i], num, sizeof(int) * max_m) == 0) {
			return  i + 1;
		}
	}
	return 0;
}

int *calc(int a, int b) {
	int *tmp = (int *)calloc(sizeof(int), max_m);
	tmp[0] = 1, tmp[1] = 1;
	for (int i = 0; i < b; i++) {
		for (int j = 1; j <= tmp[0]; j++) tmp[j] *= a;
		for (int j = 1; j <= tmp[0]; j++) {
			if(tmp[j] < 10) continue;
			tmp[j + 1] += tmp[j] / 10;
			tmp[j] %= 10;
			tmp[0] += (j == tmp[0]);
		}
	}
	return tmp;
}

int main() {
	for (int a = 2; a <= 100; a++) {
		for (int b = 2; b <= 100; b++) {
			int *tmp = calc(a, b);
			if(find_result(tmp) == 0) {
				result[result_len++] = tmp;
			}
		}
	}
	cout << result_len << endl;
	return 0;
}
