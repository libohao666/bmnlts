/*************************************************************************
	> File Name: 02-3.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 16时06分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define N 4000000


int main(){
	int fib[3] = {0 , 1};
	int sum = 0,n = 2;
	while (fib[(n - 1) % 3] + fib[(n - 2) % 3] <= N){
		fib[n % 3] = fib[(n - 1) % 3] +  fib[(n  - 2) % 3];
		if(!(fib[n % 3] & 1)) sum += fib[n % 3];
		n += 1;
	}
	cout<<sum<<endl;
	return 0;
}
