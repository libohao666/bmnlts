/*************************************************************************
	> File Name: 003-m.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时10分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;

int is_prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}

int main(){
	ll n=600851475143,i;
	ll ans=0;
	while(n){
		for(i=2;i*i<=n;i++){
			while(n%i==0){
				n /= i;
			//cout<<i<<" "<<(is_prime(i))<<" "<<n<<" "<<is_prime(n)<<endl;
				if(i>ans)ans=i;
			}
		}
		if(is_prime(n)){
			cout<<n<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
