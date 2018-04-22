#include <stdio.h>

int main()
{
    int m,n,i,j,f=0;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(f==0){
            printf("%d ",i);
        }
        f=0;
    }
    return 0;
}
