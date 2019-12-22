/*************************************************************************
	> File Name: 2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 16时30分45秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 500
char a[max_n];
int ans[max_n + 5] = {0};
int b;
int len = 0;

void p() {
	ans[0]=1;
	ans[1]=1;
	for (int j = 0; j <b; j++) {
		for(int i = 1; i <= ans[0]; i++){
			ans[i] *= (a[len - i] - '0');
		}
		for(int k = 1;k <= ans[0]; k++){
			if(ans[k] < 10) continue;
			ans[k+1] += ans[k] / 10;
			ans[k] %= 10;
			ans[0] += (k==ans[0]);
		}
	}
	for(int i = ans[0]; i > 0; i--) {
		printf("%d",ans[i]);
	}
	printf("\n");
}

int main() {
	scanf("%s%d",&a,&b);
	len=strlen(a);	
	p();
	return 0;
}
