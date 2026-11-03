#include<stdio.h>
int main(void)
{
    int n,i,j,k;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=i;j>0;j--){
            if(a[j-1]>a[i])
                a[j]=a[j-1];
            else
                break;
        a[j]=a[i];
        }
    }
    int k=1;
        for(i=1;i<n;i++){
            if(a[i]>a[k-1]){
                a[k]=a[i];
                k++;
            }
        }
    printf("共%d种\n",k);
    printf("数值:");
    for(i=0;i<k;i++)
        printf("%d ",a[i]);
    printf("\n重复%d个\n",n-k);  
    return 0;   
}