#include <stdio.h>

// int main(void) {
//     int i;

//     for (i = 1; i <= 10; i++) {
//         printf("%d\n", i);
//         if (i == 3){
//             break;
//         }
//     }
//     return 0;
// }

//カウント変数
//無限ループ
//
//
//

int main(void) {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j<= 9; j++) {
            printf(" %2d ", i * j);
        }
        printf("\n");
    }
    return 0;
}