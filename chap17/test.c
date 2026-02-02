#include <stdio.h>

// int main(void) {

//     FILE *file;
//     file = fopen("test.txt", "w");
//     fclose(file);
//     return 0;

// }

// int main(void) {

//     FILE *file;
//     file = fopen("test.txt", "w");
//     fprintf(file, "Hello World");
//     fclose(file);
    
//     return 0;

// }

// int main(void) {
    
//     int i;
    
//     FILE *file;
//     file = fopen("test.txt", "r");
//     fscanf(file, "%d,%d", &i);
//     fclose(file);
//     printf("%d\n", i);
//     return 0;

// }

int main(void) {
    FILE *file;
    file = fopen("test.dat", "wb");
    fclose(file);
    return 0;
}