/*
 * g格式自动选择f格式或者e格式较短的一种输出，
 * %m.ne，其中m表示输出数据所占的最小宽度，n表示底数的位数（不输出末尾的0）
 */
#include<stdio.h>
int main(void)
{
    printf("1234567890\n");
    printf("%5.2g\n", .0000009979);
    printf("%6.2g\n", .0000009979);
    printf("%7.2g\n", .0000009979);
    printf("%10.6g\n", .0000009979);
    printf("%10.4g\n", .0000009979);
    printf("%10.3g\n", .0000009979);
    return 0;
}