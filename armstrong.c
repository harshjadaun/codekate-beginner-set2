#include <stdio.h>

int main()
{
    int n,sum=0,r,x;
    scanf("%d",&n);
    x=n;
    while(x!=0){
        r=x%10;
        sum+=r*r*r;
        x=x/10;
    }
    if(n==sum){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
