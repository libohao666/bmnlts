/*************************************************************************
	> File Name: 033.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 18时02分42秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 99


int gcd(int a, int b) {
	if(b == 0) return a;
	return gcd(b, a % b);
}

int is_val(int a, int b, int c) {
	if(a == b) return false;
	return (a * 10 + c) * b == (c * 10 + b) * a;
}

void solve() {
	int sum1 = 1 , sum2 = 1;
	for(int i = 1;i <= 9; i++) {
		for(int j = 1; j <= 9; j++) {
			for(int k = 1; k <= 9; k++) {
				if(is_val(i, j, k)){
					sum1 *= i;
					sum2 *= j;
					cout <<i << j<< k <<endl;
				}
			}
		}
	}
	cout<<sum1<<" "<<sum2<<endl;
	cout<<sum2/gcd(sum1,sum2)<<endl;
}
int main() {
	solve();	
	return 0;
}
