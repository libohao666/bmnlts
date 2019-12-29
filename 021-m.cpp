/*************************************************************************
	> File Name: 021-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月29日 星期日 18时28分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000
typedef long long ll;


ll val[max_n + 5] = {0};

ll d(int n) {
	ll ret = 0;
	for (int i = 1; i * i < n; i++) {
		if (n % i) continue;
		ret += i;
		ret += n / i;
	}
	return ret;
}

void init() {
	for (int i = 2; i <= max_n; i++) {
		val[i] = d(i);		
		cout << val[i] << endl;
	}
}

int binary_search(int l, int r, int x) {
	if(l >= r) return false;
	int mid = (l + r) >> 1;
	if(mid == x) return false;
	if(val[mid] == x) return mid;
	binary_search(l, mid - 1, x);
	binary_search(mid + 1, r, x);
	return -1;
}

void solve() {
	init();	int ans = 0;
	for(int i = 2; i <= max_n; i++) {
		int tmp = binary_search(1, max_n, i);
		if(tmp <= 0 ) continue;
		cout << i << " " << tmp << endl;
	}
}

int main() {
	solve();	
	return 0;
}
