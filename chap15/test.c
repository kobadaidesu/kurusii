#include <stdio.h>

// int main(void) {
//     int *p;
//     int i;
//     p = &i;

//     printf("p = %p\n", p);
//     printf("&i = %p\n", &i);
//     return 0;

// }

// int main(void) {
//     int *p;
//     int i;
//     p = &i;
//     *p = 10;
//     printf("%d\n", *p);
//     printf("%d\n", i);
//     return 0;
// }

// void func(int* pavalue );

// int main(void) {
    
//     int value = 10;
//     printf("&value = %p\n", &value);
//     func(&value);
//     printf("value = %d\n", value);
//     return 0;

// } 
// void func(int* pavalue)
// { 
    
//     printf("pavalue = %p\n", pavalue);
//     *pavalue = 100;
//     return;

// }

int getavarage(int data[10]);

int main(void) {
    int average, array[10] = {15, 25, 35, 45, 55, 65, 75, 85, 95, 105};

    average = getavarage(array);
    printf("平均値は %d です.\n", average);
    return 0;
}

int getavarage(int data[10]) {
    int i, sum = 0;

    for (i = 0; i < 10; i++) {
        sum += data[i];
    }
    return sum / 10;
}