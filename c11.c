#include<stdio.h>
int main(void)
{
    int i,j,best;
    int cnt[26]={0};
    char line[202];
    j=0;best=0;
    scanf("%201[^\n]",line);
    for(i=0;line[i]!='\0';i++){
        if(line[i]>='a'&&line[i]<='z')
            cnt[line[i] - 'a']++;
            j++;
    }
    if(j!=0){
        for(i=0;i<26;i++){
            if(cnt[i]>cnt[best]){
                best=i;
            }
        }
        printf("最多%s出现%d次\n",(char)'a'+best,cnt[best]);
        printf("出现过:");
        for(i=0;i<26;i++){
            if(cnt[i]!=0)
                printf("%s:%d",(char)'a'+i,cnt[i]);
        }
        printf("\n");
    }    
        
    else
        printf("none\n");
    return 0;
}