#include <stdio.h>

int main(void)
{
    int i, j = 0, best = 0;
    int cnt[26] = {0};
    char line[202];

    if (scanf("%201[^\n]", line) != 1) line[0] = '\0';

    for (i = 0; line[i] != '\0'; i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {   /* 花括号：两句都受保护 */
            cnt[line[i] - 'a']++;
            j++;                                  /* 只数字母 */
        }
    }

    if (j == 0) { printf("none\n"); return 0; }

    for (i = 1; i < 26; i++)
        if (cnt[i] > cnt[best]) best = i;

    printf("最多 %c 出现 %d 次\n", 'a' + best, cnt[best]);   /* %c */

    printf("出现过:");
    for (i = 0; i < 26; i++)
        if (cnt[i] != 0) printf(" %c:%d", 'a' + i, cnt[i]);
    printf("\n");

    return 0;
}