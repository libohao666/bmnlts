/*************************************************************************
	> File Name: 024-m.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月28日 星期六 18时56分05秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 10
int cnt = 0;

void print(int ans[]) {
	for(int i = 0; i < max_n; i++) {
		cout << ans[i];
	}
	cout << endl;
}

void go(int now,int num[],int ans[]) {
		if(cnt > 1000000) return ;
			if(now == max_n) {
			//print(ans);
			cnt++;
			if(cnt == 1000000) {
				cout<<"ans ";
				print(ans);
			}
			return ;
		}		
		for(int i = 0; i < max_n; i++) {
			if(num[i]) continue;
			ans[now] = i;									
			num[i] = 1;				
			go(now + 1, num, ans);
			num[i] = 0;	
		}
}
int main() {					
	int num[max_n] = {0};
	int ans[max_n] = {0};
	go(0, num, ans);
	return 0;
}
