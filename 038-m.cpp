/*************************************************************************
	> File Name: 038-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 19时23分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000

int ans = 0;

int is_val(int n,int i) {
	int cnt = 0;
	int ret = 0;
	int num[10] = {0};
	for(int j = i; j >= 1; j--) {
		int tmp = j * n;
		while (tmp) {
			if(tmp % 10 == 0) return 0;

			ret = ret * 10 + tmp % 10;
			if(num[tmp % 10]) return 0;
			num[tmp % 10] = 1;
			tmp /= 10;
			cnt++;
		}
	}
	if(cnt != 9)return 0;
	int tmp = 0;
	while (ret) {
		tmp = tmp * 10 + ret % 10;
		ret /= 10;
	}
	return tmp;
}

int main() {
	cout << is_val(192,3)<<endl;
	for(int i = 1; i <= max_n; i++) {
		for(int j = 1; j <= 9; j++) {
			if(is_val(i, j)) {
				if(ans < is_val(i, j))
				ans = is_val(i, j);
				cout << i << endl;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
