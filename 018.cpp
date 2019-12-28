/*************************************************************************
	> File Name: 018.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 16时20分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 20

int val[max_n][max_n] = {0};
int ans[max_n][max_n] = {0};

int dfs(int i, int j, int n) {
	if(ans[i][j]) return ans[i][j];
	if(i + 1 == n) return ans[i][j];
	int val1 = dfs(i + 1, j, n);
	int val2 = dfs(i + 1, j + 1, n);
	ans[i][j] = (val1 > val2 ? val1 : val2) + val[i][j]; 
	return ans[i][j];
}

int main() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	cout << dfs(0, 0, max_n) << endl;
	
	return 0;
}
