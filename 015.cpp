/*************************************************************************
	> File Name: 015.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 15时33分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	long long m = 40, n = 20, ans = 1;
	while (m != 20 || n) {
		if (m != 20) {
			ans *= (m--);
		}
		if(n != 0 && ans % n == 0) {
			ans /= (n--);
		}
	}
	cout << ans << endl;
	return 0;
}
