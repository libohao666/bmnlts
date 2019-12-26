/*************************************************************************
	> File Name: 044.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月24日 星期二 18时59分10秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<iostream>
using namespace std;

typedef long long int1;

int1 Pentagonal(int1 n) {
	return n * (3 * n - 1) / 2;
}

int1 binary_search(int1 (*func)(int1), int1 n, int1 x) {
	int1 head = 1, tail = n, mid;
	while(head <= tail) {
		mid = (head + tail) >> 1;
		if (func(mid) == x) return mid;
		if(func(mid) < x) head = mid + 1;
		else tail = mid -1;
	}
	return 0;
}

int main() {
	int1 n = 2, D = INT32_MAX, pk, pj;
	while (Pentagonal(n) - Pentagonal(n - 1) < D) {
		pk = Pentagonal(n);
		//cout << pk <<" "<< D << endl;	
		for (int1 j = n - 1; j >= 1; j--) {
			pj = Pentagonal(j);
			if (pk - pj >= D) break;
			int falg = 1;
			falg = binary_search(Pentagonal, 2 * n, pk + pj);
			falg = falg && binary_search(Pentagonal, n, pk -pj);
			if(falg) D = pk - pj;
		}
		n += 1;
	}
	printf("%lld\n", D);
	return 0;
}
