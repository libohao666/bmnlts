/*************************************************************************
	> File Name: 031.cpp
	> Author: lbh
	> Mail: 2052658718@qq.com 
	> Created Time: 2019年12月22日 星期日 14时48分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 8
#define max_m 200

int w[max_n + 5] = {
	1, 2, 5, 10, 20, 50, 100, 200
};
int f[max_m + 5]={0};

int main() {
	f[0] = 1;
	for(int i = 0; i < max_n; i++) {
		for(int j = 1; j <= max_m;j++) {
			if(j >= w[i]) f[j] += f[j - w[i]];
		}
	}
	cout << f[max_m] << endl;
	return 0;
}
