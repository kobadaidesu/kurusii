#include <stdio.h>

int contfunc(void);

int main(void) {
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void) {
    int count = 0;
    count++;
    printf("%d\n", count);
    return count;
}

//ローカル変数
//グローバル変数
//静的変数

