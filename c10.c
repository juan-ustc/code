#include <stdio.h>

int main(void)
{
    char line[205];
    int i = 0, words = 0, best_len = 0, best_start = 0, best_idx = 0;

    if (scanf("%204[^\n]", line) != 1)
        return 0;

    while (line[i] != '\0')
    { /* 一直走到字符串结束 */
        int start, len;

        if (line[i] == ' ')
        { /* 空格：跳过，继续找 */
            i++;
            continue;
        }

        start = i; /* 单词从这里开始 */
        while (line[i] != '\0' && line[i] != ' ')
            i++;         /* 一路走到空格或结尾 */
        len = i - start; /* 走过的距离 = 单词长度 */

        words++;
        printf("第 %d 个单词: [%.*s]  start=%d len=%d\n",
               words, len, line + start, start, len);
        if (len > best_len)
        { /* 严格大于：并列时保留最早出现的 */
            best_len = len;
            best_start = start;
            best_idx = words;
        }

        printf("一共 %d 个单词\n", words);

        return 0;
    }
}