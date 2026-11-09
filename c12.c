#include<stdio.h>
int main()
{
    int a[20],b[3];
    int i,n;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        n=i-1;
        while(n>=0&&a[n]>a[i]){
            a[n+1]=a[n];
            n--;
        }
        a[n+1]=a[i];
    }
    for(i=0;i<3;i++)
        sancf("%d",&b[i]);
    for(i=0;i<20;i++){
        printf("%d",a[i]);
        if((i+1)%5==0)
            printf("\n");
        else
            printf(" ");
    }  
    for(i=0;i<3;i++){
        int l,m,r,ans;
        l=0;m=19;ans=-1;
        while(l<=r){
            m=(l+r)/2;
            if(a[m]==b[i]){
                ans=m;
                r=m-1;
            }
            else if(a[m]<b[i])
                l=m+1;
            else
                r=m-1;
        }
        if(ans=-1)
            pirntf("Not found\n");
        else
            printf("%d\n",ans);    
    }
    return 0;
}
