#include <stdio.h>
#include "string.h"
#define maxsize 100
int ans[maxsize+8];
int main() {
    int t,n;
    memset(ans,0, sizeof(ans));
    for (int i = 1; i < maxsize; i++) {
        n=i%10+i;t=i/10;
        while (t!=0){
            n+=t%10;
            t=(int)i/10;
        }
        if(n<maxsize&&ans[n]==0)
            ans[n]=i;
    }
    printf("input a num:\n");
    scanf("%d",&t);
    if(t<maxsize)
        printf("%d's ans is %d",t,ans[t]);
    return 0;
}
