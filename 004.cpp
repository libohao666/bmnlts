/*************************************************************************
	> File Name: 004.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 18时15分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n, int base){//base进制下的回文判断
	int x = n, tmp = 0;
	while (x){
		tmp = tmp * base + x % base;
		x /= base;

	}
	return tmp == n;
}

int main(){
	int ans = 0;

	for(int i = 100; i < 1000; i++) {
		for(int j = 100; j<1000; j++) {
			if (is_val(i * j, 10)&& i * j > ans) ans = i * j;
				
		}
	}
	cout<<ans<<endl;
	return 0;
}
