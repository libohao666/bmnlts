/*************************************************************************
	> File Name: 002-m.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时06分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int last = 1;
	int now = 2;
	int sum = 0;
	while(now < 4000000){
		if(now % 2 == 0){
			sum += now;
			cout<<now<<endl;
		}
		int tmp = now;
		now += last;
		last = tmp;
	}
	cout<<sum<<endl;
	return 0;
}
