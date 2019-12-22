/*************************************************************************
	> File Name: 020-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 20时37分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 500
int ans[max_n + 5] = {1,1,0};

void solve () {
	for(int j = 1; j <= 100; j++) {
		cout << j << endl;
		for(int i = 1; i <= ans[0]; i++) {
			ans[i] *= j;
			/*
			for(int k = 1; k <= ans[0]; k++) {
				if(ans[k] < 10) continue;
				ans[k + 1] += ans[k] / 10;
				ans[k] %= 10;
				ans[0] += (k == ans[0]);
			}
			*/
		}
		for(int k = 1; k <= ans[0]; k++) {
			if(ans[k] < 10) continue;
			ans[k + 1] += ans[k] / 10;
			ans[k] %= 10;
			ans[0] += (k == ans[0]);
		}

	}
}

int main() {
	solve();
	cout << ans[0]<<endl;
	int sum = 0;
	for(int i = 1; i <= ans[0]; i++) {
		cout << ans[i];
		sum += ans[i];
	}
	cout << endl;
	cout<< sum << endl;
	return 0;
}
