/*************************************************************************
	> File Name: 014.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 14时08分05秒
 ************************************************************************/

#include<stdio.h>

#define max_n 1000000

typedef long long ll;

ll get_len(ll n) {
	if(n == 1) return 1;
	if(!(n & 1)) return get_len(n >> 1) + 1;
	return get_len(3 * n + 1) + 1;
}

int main() {
	ll ans = 0, len = 0;
	for(ll i = 1; i < max_n; i++) {
		ll tmp=get_len(i);
		if(tmp > len) {
			ans = i;
			len = tmp;
		}
	}
	printf("num = %lld,len = %lld\n", ans, len);

	return 0;

}
