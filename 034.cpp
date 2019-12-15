/*************************************************************************
	> File Name: 034.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 20时02分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

int jj[11]={0};

int j(int n) {//记忆化搜索
	if(jj[n])return jj[n];
	if(n==0)return 1;
	if(n==1)return 1;
	return jj[n]=n*j(n-1);
}
int f1(int n) {
	return ( n * j(9));
}
int f2(int n) {
	int ret = 1;
	for(int i = 1; i < n ;i++) {
		ret *= 10;
	}
	return ret;
}
void init_jj(){
	for(int i=1;i<=9;i++){
		jj[i]=j(i);
	}
}
bool is_val(int n){
	int tmp = 0;
	int d = n;
	while(n){
		tmp += j(n%10);
		n /= 10;
	}
	return tmp == d;
}
int main(){
	int max = 0;
	for(int i = 1; i <= 100; i++){
		if(f1(i) < f2(i))break;
		max = f1(i);
	}
	//cout<<max<<endl;	
	int ans = 0;
	for(int i = 3; i <= max; i++){
		if(is_val(i)){
			ans += i;
			//cout<<i<<endl;
		}
	}
	cout<<ans<<endl;
	return 0;
}
