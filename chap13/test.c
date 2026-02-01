#include <stdio.h>

// int main(void) {
//     int array[100];
//     array[9] = 100;
//     printf("%d\n", array[9]);
//     array[9]++;
//     printf("%d\n", array[9]);
//     return 0;
// }

// int main(void) {
//     int array[] = { 42, 56, 78, 91, 15 };
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("array[%d] = %d\n", i, array[i]);
//     }
//     return 0;
// }

#include <memory.h>

// int main(void) {
//     int array1[] = {42, 56, 78, 91, 15};
//     int array2[] = {1, 2, 3, 4, 5};
//     int i;

//     for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
//         printf("array2[%d] = %d\n", i, array2[i]);
//     }

//     memcpy(array2, array1, sizeof(array1));

//     for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
//         printf("array2[%d] = %d\n", i, array2[i]);
//     }
//     return 0;
// }

//配列

int main(void) {
    int i;
    int array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
