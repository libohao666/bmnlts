/*************************************************************************
	> File Name: 003.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 16时36分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define N 600851475143LL
typedef long long ll;

int main(){
	ll ans = 0, M = N;
	ll i = 2;
	while(i * i <= M){
		if(M % i == 0){
			ans = i;//ans 一定是素因子
		}
		while(M % i ==0 ){
			M /= i;
		}
		i += 1;
	}
	if(M > 1) {
		ans = M;//必要
	}
	cout<<ans<<endl;
	return 0;
}
