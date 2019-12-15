/*************************************************************************
	> File Name: 028-m.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 19时12分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int n=1;
	int sum=1;
	int d=2;
	while(n<=36){
		for(int i=1;i<=4;i++){
			n+=d;
			cout<<n<<" ";
			sum+=n;
		}
		d+=2;
	}
	cout<<sum<<endl;
	return 0;
}
