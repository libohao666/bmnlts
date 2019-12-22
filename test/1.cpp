/*************************************************************************
	> File Name: 1.cpp
	> Created Time: 2019年12月17日 星期二 19时53分25秒
 ************************************************************************/

#include<stdio.h>
#define max_n 10000
int prime[max_n + 5] = {0};
void f1(){//min 
	for(int i = 2; i <= max_n; i++){
		if(prime[i]) continue;
		for(int j = i *2; j <= max_n; j += i){
			if(prime[j]) continue;
			prime[j] = i;
		}
	}
	for(int i = 2; i <= max_n; i++){
		if(!prime[i])prime[i]=i;
	}
	int n;
	while(~scanf("%d",&n)){
		printf("min_prime(%d)=%d\n",n,prime[n]);
	}
}
void f2(){//max
	for(int i = 2; i <= max_n; i++){
		if(prime[i])continue;
		for(int j = i;j <= max_n; j+=i){
			prime[j]=i;		
		}
	}
	int n;
	while(~scanf("%d",&n)){
		printf("max_prime(%d)=%d\n",n,prime[n]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:{
			f1();
			break;
		}
		case 2:{
			f2();
			break;
		}
	}
	return 0;
}
