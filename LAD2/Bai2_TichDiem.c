#include <stdio.h>
int main (){
    int toan , ly , hoa ;
    float dtb;

    printf("Nhap diem Toan: ");
    scanf("%d", &toan);

    printf("Nhap diem Ly: ");
    scanf("%d", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%d", &hoa);

    dtb = 1.0* (toan * 3 + ly * 2 + hoa ) / 6;

    printf("\n======KET QUA======\n");
    printf(" Toan : %d\n" , toan);
    printf(" Ly   : %d\n" , ly);
    printf(" Hoa  : %d\n" , hoa);
    printf(" Diem trung binh : %.2f\n" , dtb);

    return 0;
}