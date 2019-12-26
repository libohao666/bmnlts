/*************************************************************************
	> File Name: 045.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月24日 星期二 19时54分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long int1;

int1 Triangle(int1 n) {
	return n * (n + 1) / 2;
}

int1 Pentagonal(int1 n) {
	return n * (3 * n - 1) / 2;
}

int1 Hexagonal(int1 n) {
	return n * (2 * n - 1);
}

int1 binary_search(int1 (*num)(int1), int1 n, int1 x) {
	int1 head = 1, tail = n -1, mid;
	while(head <= tail) {
		mid = (head + tail) >> 1;
		if(num(mid) == x) return mid;
		if(num(mid) < x) head = mid + 1;
		else tail = mid -1;
	}
	return -1;
}

int main() {
	int1 n = 144;
	while (binary_search(Pentagonal, 2 * n, Hexagonal(n)) == -1) n += 1;
	cout << Hexagonal(n) << endl;
	return 0;
}
