#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,rev=0;
	scanf("%d",&n);
	x=n;
	while(x!=0){
		rev=rev*10+x%10;
		x=x/10;
	}
	if(rev==n){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}
