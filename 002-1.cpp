/*************************************************************************
	> File Name: 002-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时48分29秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define N 4000000


int main(){
	int a, b;
	int sum = 0,n = 0;
	a = 0;
	b = 1;
	while(a + b <= N){
		n += 1;
		b = a + b;
		a = b - a;
		if(b & 1) continue;
		sum += b;
	}

	cout<<n<<" "<<sum<<endl;
	return 0;
}

