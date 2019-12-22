/*************************************************************************
	> File Name: 032-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 15时34分25秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
#define max_n 2000

vector<int>tmp;

bool is_val(int a, int b, int c) {
	int cnt = 0;
	vector<int>res;
	while (a) {
		res.push_back(a % 10);
		a /= 10;
		cnt++;
	}
	while (b) {
		res.push_back(b % 10);
		b /= 10;
		cnt++;
	}
	while (c) {
		res.push_back(c % 10);
		c /= 10;
		cnt++;
	}
	if(cnt > 9)return false;
	sort(res.begin(), res.end());
	return res == tmp;
}

int main() {
	set<int>ans_tmp;
	int ans = 0;
	for(int i = 1; i <= 9; i++){
		tmp.push_back(i);
	}
	for(int i = max_n; i >= 1; i--) {
		for(int j = max_n; j >= 1; j--) {
			int cj = i * j;
			if(is_val(i, j, cj)) {
				ans_tmp.insert(cj);
				cout<<i<<"*"<<j<<"="<<cj<<endl;
			}
		}
	}
	set<int>::iterator p;
	for(p = ans_tmp.begin(); p != ans_tmp.end(); p++) {
		ans += *p;
	}
	cout << ans << endl;
	return 0;

}
