#include<stdio.h>
int main(void)
{
    int n,q,i;
    int a[100000],b[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        int l,m,r;
        l=0;r=n;m=(l+r)/2;
        while(l<r){
            if(a[m]<b[i])
                l=m+1;
            else
                r=m;
        }
        if (l==n) 
            printf("-1\n");
        else
            printf("pos=%d, lambda=%dnm\n", l+1, a[l]);
    }
    return 0;
}
 