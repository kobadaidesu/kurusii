#include <stdio.h>
#include <string.h>

typedef struct {

    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

void student_print(student data);

int main(void) {

    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 15;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 65.5;

    student_print(data);

    return 0;

}

void student_print(student data) {

    printf("%d 年 %d 組 %d 番 %s\n", data.year, data.clas, data.number, data.name);
    printf("身長: %.1f cm\n", data.stature);
    printf("体重: %.1f kg\n", data.weight);
    printf("出席番号 %03d\n", data.number);
    printf("クラス %02d\n", data.clas);
    printf("名前: %-10s\n", data.name);

    return;
}