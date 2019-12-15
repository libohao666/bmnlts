/*************************************************************************
	> File Name: 001.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 14时51分52秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n ) {
	if(n % 3 == 0 || n % 5 == 0) return 1;
	return 0;
}

int main(){
	int sum = 0;
	for(int i = 1; i <= 1000; i++) {
		if(!is_val(i)) continue;
		sum+=i;
	}
	cout<<sum<<endl;

	return 0;

}
