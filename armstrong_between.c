#include <stdio.h>

int main()
{
    int n,m,i,sum=0,r,x;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++){
        x=i;
        while(x!=0){
            r=x%10;
            sum+=r*r*r;
            x=x/10;
        }
        if(i==sum){
             printf("%d ",i);
        }
        sum=0;
    }    
    return 0;
}
