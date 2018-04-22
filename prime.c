#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n,i,f=0;
	scanf("%d",&n);
	if(n==1){
		printf("no\n");
		return;
	}
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("no\n");
			f=1;
			break;
		}
	}
	if(f==0){
		printf("yes\n");
	}
	return 0;
}
