#include<stdio.h>
int main()
{
    int a,b,c,x,y,answer;
    scanf("%d %d",&b,&c);
    answer=b>c&&b==c;
    printf("%d\n",answer);
    scanf("%d %d %d",&a,&b,&c);
    answer=!(a>b)&&!c||1;
    printf("%d\n",answer);
    scanf("%d %d",&a,&b);
    answer=!(x=a)&&(y=b)&&0;
    printf("%d\n",answer);
    scanf("%d %d %d",&a,&b,&c);
    answer=!(a+b)+c-1&&b+c/2;
    printf("%d\n",answer);
    answer=1&&30%10>=0&&30%10<=3;
    printf("%d\n",answer);
    return 0;
}