#include <stdio.h>

int main(void) {
	// your code goes here
	int i,num,ans=1,power;
	scanf("%d %d",&num,&power);
	for(i=power;i>0;i--){
		ans=ans*num;
	}
	printf("%d\n",ans);
	return 0;
}
