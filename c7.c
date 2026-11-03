#include <stdio.h>

int main(void)
{
    double x, b;
    long long a, n2 = 1, n10 = 1, sum = 0;
    int t;

    if (scanf("%lf", &x) != 1) return 0;
    if (x < 0) { putchar('-'); x = -x; }

    a = (long long)x;          /* 整数部分 */
    b = x - (double)a;         /* 小数部分，别让它闲着 */

    /* 整数部分：除 2 取位，边取边打包成十进制数 */
    while (a / n2 > 0) {                  /* ① 改停止条件 */
        t = (int)((a / n2) % 2);          /* ② 改取位方式 */
        sum += t * n10;
        n2 *= 2;
        n10 *= 10;
    }
    printf("%lld", sum);                  /* ③ 改 long long */

    /* 小数部分：乘 2 取整，逐位输出（见下面为什么这里不能用打包） */
    if (b > 0.0) {
        putchar('.');
        int i;
        for (i = 0; i < 20 && b > 0.0; i++) {
            b *= 2.0;
            if (b >= 1.0) { putchar('1'); b -= 1.0; }
            else putchar('0');
        }
    }
    return 0;    /* 不输出换行 */
}
