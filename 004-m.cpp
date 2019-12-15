/*************************************************************************
	> File Name: 004-m.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时38分22秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

bool h(ll n) {
	vector<ll>res;
	while(n){
		int d= n % 10;
		res.push_back(d);
		n /= 10;
	}
	for(ll i = 0 ;i < res.size();i++){
		if(res[i]!=res[res.size()-i-1])return false;
	}
	return true;
}

int main(){
	int ans=0;
	for(int i = 999; i >=100; i--) {
		for(int j = 999; j >= 100; j--){
			ll cj=i*j;
			if(h(cj)){
				cout<<i<<" "<<j<<endl;
				cout<<cj<<endl;
				if(cj>ans)ans=cj;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
