#include <stdio.h>

// int main(void) {
//     int suuti ;
//     scanf("%d", &suuti);

//     if (suuti == 0) 
//         printf("aaaaa %d\n", suuti);
//     return 0;
// }

// int main(void) {
//     int suuti;
//     scanf("%d", &suuti);

//     if (suuti >= 8 && suuti <= 12)
//         printf("8 ~ 12 の間です \n");
    
//     if (!(suuti >= 8 && suuti <= 12))
//         printf("8 ~ 12 の間ではありません \n");
    
//     return 0;
// }

// int main(void) {
//     int score;
//     printf("点数を入力してください:");
//     scanf("%d", &score);

//     if (score > 100)
//         printf("点数が不正です\n");
//         score = 100;
    
//     printf("あなたの点数は %d 点です\n", score);
//     return 0;    
// }

//false
//true
//構造ブロック

int main(void) {
    int year;
    scanf("%d", &year);
    
    if (year % 4 == 0) { 
        printf("%d 年はオリンピック開催です.\n", year)
    ;} else {
        printf("%d 年はオリンピック開催ではありません.\n", year);
    }
    return 0;
}
