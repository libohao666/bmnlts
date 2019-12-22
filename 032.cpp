/*************************************************************************
	> File Name: 032.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 16时27分14秒
 ************************************************************************/

#include<stdio.h>
#include<cmath>
#define max_n 10000

int keep[max_n + 5] = {0};

int add_to_num(int *num, int n) {
	while (n) {
		if(num[n % 10]) return 0;
		num[n % 10] += 1;
		n /= 10;
	}
	return 1;
}

int digits(int n) {
	if(n == 0) return 1;
	return floor(log10(n)) + 1;
}
int is_val(int a, int b) {
	if(digits(a) +  digits(b) + digits(a * b) - 9 ) return 0;
	int num[10] = {0};
	int flag = 1;
	num[0] = 1;
	flag = flag && add_to_num(num, a);
	flag = flag && add_to_num(num, b);
	flag = flag && add_to_num(num, a * b);
	return flag;
}

int main() {
	int sum = 0;
	int tmp[100];
	tmp[0] = 1;
	for (int a = 1; a < 100; a++) {
		for (int b = a + 1; b < 10000; b++) {
			if(!is_val(a, b)) continue;
			if(keep[a * b]) continue;
			sum+= a * b;
			keep[a * b] = 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}
