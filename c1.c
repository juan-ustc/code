#include<stdio.h>
int main()
{
    int h1,m1;
    int h2,m2;
    int all,h,m;
    printf("输入时间1:\n");
    scanf("%d:%d",&h1,&m1);
    printf("输入时间2:\n");
    scanf("%d:%d",&h2,&m2);
    all=(h1+h2)*60+m1+m2;
    h=all/60;
    m=all%60;
    printf("%d:%d",h,m);
    return 0;
}