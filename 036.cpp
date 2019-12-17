/*************************************************************************
	> File Name: 036.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 20时47分24秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
bool h1(int n) {
	int tmp = 0;
	int d = n;
	while(d){
		tmp = tmp * 10 + d % 10;
		d /= 10;
	}
	return tmp == n;
}
bool h2(string s) {
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size() - i - 1])return false;
	}
	return true;
}
string f(int n) {
	string ret = "";
	while(n) {
		if(n%2 == 0)ret += "0";
		else ret += "1";
		n /= 2;
	}
	return ret;
}
bool is_val(int n) {
	return h1(n) && h2(f(n));
}
int main(){
	int ans=0;
	for(int i = 1;i < 1000000; i++){
		if(is_val(i))ans += i;
	}
	cout<<ans<<endl;
	return 0;
}
