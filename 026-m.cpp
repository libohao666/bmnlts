/*************************************************************************
	> File Name: 026-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 20时32分26秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int max_len = 0;
int ans = 0;

int get_len(int n) {
	
}

int main() {
	for(int i = 2; i <= 1000; i++) {
		int tmp = get_len(i);
		if(tmp > max_len) {
			ans = i;
			max_len = tmp;
		}
	}
	cout << ans << endl;
	return 0;
}
