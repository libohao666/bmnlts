/*************************************************************************
	> File Name: 043-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 19时50分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000
int ans[200] = {0};
int w[7] = {2, 3, 5, 7, 11, 13, 17};

int is_val(int s[10]) {
	for(int i = 2; i <= 8; i++) {
		int sum = s[i] * 100 + s[i + 1] * 10 + s[i + 2];
		//cout << sum << endl;
		if(sum % w[i - 2] != 0)return 0;
	}
	return 1;
}

void go(int s[10], int now, int num[10]) {
	if(now == 10) {
		for(int i = 1; i <= 10; i++){
			cout<<s[i];
		}
		cout<<endl;
		if(!is_val(s))return;
		for(int i = 1; i <= 10; i++){
			cout<<s[i];
			ans[10 - i + 1] += s[i];
		}
		cout << endl;
		return ;
	}
	for(int i = 0; i <= 9; i++) {
		if(!num[i]) {
			num[i] = 1;
			s[now + 1] = i;
			go(s, now + 1, num);
			num[i] = 0;
		}
	}
}

int main() {
	int s[10] = {0},num[10] = {0};
	go(s, 0, num);
	int test[]={0,1,4,0,6,3,5,7,2,8,9};
	cout<< is_val(test)<<endl;
	ans[0] = 10;
	for(int i = 1; i <= ans[0]; i++) {
		if(ans[i] < 10) continue;
		ans[i+ 1] += ans[i] / 10;
		ans[i] %= 10;
		ans[0] += (i == ans[0]);
	}
	for(int i = ans[0]; i > 0; i--) {
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
