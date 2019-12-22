/*************************************************************************
	> File Name: 031-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 14时36分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 8
#define max_m 200
int dp[max_n + 5][max_m + 5] = {0};
int w[max_n + 5] = {0, 1, 2, 5, 10, 20, 50, 100, 200};

void solve() {
	for(int i = 1; i <= 200; i++) {
		dp[1][i] = 1;
	}
	for(int i = 1; i <= 200; i++) {
		for(int j = 2; j <= 8; j++) {
			dp[j][i] = dp[j - 1][i] + dp[j][i - w[j]];
		}
	}
}
int main() {
	solve();
	cout<<dp[8][200]<<endl;
	return 0;
} 
