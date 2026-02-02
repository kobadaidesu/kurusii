#include <stdio.h>

// #define EXCISETAX 0.03

// int main(void) {

//     int price;

//     printf("本体価格：");
//     scanf("%d", &price);
//     price = (int)((1 + EXCISETAX) * price);
//     printf("税込価格：%d 円\n", price);

//     return 0;

// }

// #define PRINTM(X) printf("aaaa%d\n", X)

// int main(void) {
//     int a1 = 100, a2 = 200;
//     PRINTM(a1);
//     PRINTM(a2);
//     return 0;
// }

// #define get_trap(a, b, h) (a + b) * h / 2

// int main(void) {
//     int a, b, h;
//     int s;
//     printf("上底、下底、高さを入力してください:");
//     scanf("%d %d %d", &a, &b, &h);
//     s = get_trap(a, b, h);
//     printf("台形の面積は %d です.\n", s);
//     return 0;
// }

enum {
    OLYMPIC,
    NO_OLYMPIC
};

int main(void) {
    int year, hold;
    scanf("%d", &year);
    
    hold = cal(year);

    switch(hold){

        case OLYMPIC:
            printf("オリンピック開催の年です。\n");
            break;
        
        case NO_OLYMPIC:
            printf("オリンピック開催の年ではありません。\n");
            break;    
    } 
    return 0;
}

int cal(int year) {
    if (year % 4 == 0) {
        printf("%d 年はオリンピック開催です.\n", year);
        return OLYMPIC;
    } else {
        printf("%d 年はオリンピック開催ではありません.\n", year);
        return NO_OLYMPIC;
    }
  }