#include <stdio.h>

// int main(void) {
//     int value;
//     value = 10;
//     printf("%d\n", value);
// //     return 0;

// int main(void) {
//     int value;
//     value = 10 + 30;
//     printf("%d\n", value);
//     return 0;
// }

#include <stdio.h>

// int main(void) {
//     int value; 
//     value = 10;
//     printf("%d\n", value);
//     return 0;
// }

// int main(void) {
//     int value;
//     value = 10;
//     printf("%d\n", value);
//     value++;
//     printf("%d\n", value);
//     value--;
//     printf("%d\n", value);
//     return 0;
// }

// int main(void) {
//     printf("%d\n", (int)(1.03 * 9));
//     return 0;
// }

// int main(void) {
//     int a = 10000, b = 500, c = 3;

//     printf("Aは %05d です. \n", a);
//     printf("Bは %05d です. \n", b);
//     printf("Cは %05d です. \n", c);
// }
//変数宣言
//
//increment
//120 5桁合わせ

int main(void) {
    int a,b;
    double total;
    a = 198;
    b = 138;
    total = 1000 - (a + b * 2) * 1.05;

    printf("おつりは %d 円です.\n", (int)total);
    return 0;

}