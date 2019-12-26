/*************************************************************************
	> File Name: 012-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月26日 星期四 19时38分03秒
 ************************************************************************/


#include<iostream>
using namespace std;

int num(int n) {
	int i, sum = 0, j;
	for (int i = 1; i * i <=n; i++) {
		if (n % i == 0) {
			sum++;
			j  = i;
		}
	}
	return (j * j == n) ? (2 * sum - 1) : 2 * sum;
}

int main() {
	int tmp = 0;
	int i = 1;
	while (num(tmp) <= 500) {
		tmp += i;
		i++;
	}
	cout << tmp << endl;
	return 0;
}




