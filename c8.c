#include<stdio.h>
int main(void)
{
    int m,n,i,j,k,t,min;
    int judge=1;
    int a[50][50];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",a[i][j]);
    }
    for(i=0;i<m;i++){
        k=0;
        min=a[i][0];
        for(j=1;j<n;j++){
            if(min>a[i][j])
                min=a[i][j];
            k=j;
        }
        for(t=1;t<m;t++){
            if(min>a[t][k])
                judge=0;break;
        }
        if(judge==1)
            break;    
    }
    if(judge==1)
        printf("鞍点 %d %d %d",i,k,a[i][k]);
    else
        printf("none");
    return 0;
}