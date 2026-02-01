#include <stdio.h>

// int main(void) {
//     int data;
//     scanf("%d", &data);
//     printf("%d\n", data);
//     return 0;
// }



// int main(void) {
//     double data;
//     scanf("%lf", &data); 
//     printf("%f\n", data);
//     return 0;
// }

// int main(void) {
//     int data1, data2;
//     scanf("%d%d", &data1, &data2);
//     printf("%d, %d\n", data1, data2);
//     return 0;
// }

int main(void) {
    int a;
    scanf("%d", &a);
    
    printf("%d\n", (int)(a * 0.99));
    printf("%d\n", (int)(a * 0.97));
    printf("%d\n", (int)(a * 0.95));
    printf("%d\n", (int)(a * 0.92));
    return 0;
}