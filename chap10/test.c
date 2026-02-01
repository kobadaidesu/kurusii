#include <stdio.h>

// int main(void) {
//     int money = 1;
//     int month = 1;

//     while (money < 1000000) {
//         money *= 2;
//         month++;

//         printf("%d ヶ月目: %d 円\n", month, money);
//     }
//     printf("%d ヶ月で 100 万円を超えます.\n", month);
//     return 0;
// }

int main(void) {
    int i = -1;
    
    while (i < 0 || i > 100) {
        scanf("%d", &i);

    }
    printf("%d\n", i);
    return 0;
}