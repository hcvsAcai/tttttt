#include <stdio.h>
#include <stdlib.h>
int main () 
{
    char string[20];
    double output;
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atoi(string);
    printf("%s轉換後的整數為%f\n", string, output);
    return 0;
}
