/*************************************************************************
	> File Name: 026.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 20时35分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 1000

int get_len(int d) {
	int r_len[max_n + 5] = {0};
	int r = 1, t =1;
	r_len[r] = 1;
	while (r) {
		r *= 10;
		r %= d;
		t += 1;
		if(r_len[r]) return t - r_len[r];
		r_len[r] = t;
	}
	return 0;
}

int main() {
	int d = 0, len = -1;
	for (int i = 2; i < max_n; i++) {
		int tmp = get_len(i);
		if (len < tmp) {
			len = tmp;
			d = i;
		}
	}
	cout << d << endl;
	cout << len << endl;
	return 0;
}
