#include <stdio.h>

// int sum(void); /* プロトタイプ宣言 */

// int main(void) {
//     sum();
//     return 0;
// }

// int sum(void) {
//     printf("%d\n", (1 + 100) * 100 / 2);
//     return 0;
// }

// int sum(int, int);

// int main(void) {
//     int value;
//     value = sum(50, 100);
//     printf("%d\n", value);
//     return 0;
// }

// int sum(int max, int min) {
//     int num;
//     num = (min + max) * (max - min + 1) / 2;
//     return num;
// }
//プロトタイプ宣言
//引数
//返り値
//ｋｊｋｊｋｊ
int cal(int year);

int main(void) {
    int year;
    scanf("%d", &year);

    int ans = cal(year);
    switch (ans) {
        case 1:
            printf("%d は夏季オリンピック開催年です.\n", year);
            break;
        case 2:
            printf("%d は冬季オリンピック開催年です.\n", year);
            break;
        case 3:
            printf("%d はオリンピック開催年ではありません.\n", year);
            break;
    }
    return 0;

}

int cal(int year){
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 3;
    }
    
}