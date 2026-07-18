#include <stdio.h>
#define PI 3.14159
int main (){
    //================
    // Hinh chu nhat 
    //================
    int dai , rong ;
    printf("Nhap chieu dai");
    scanf("%d", &dai);
    printf("Nhap chieu rong");
    scanf("%d", &rong);
    int ChuviHCN = ( dai + rong)*2;
    int DientichHCN = dai * rong ;

    printf("\n==== HINH CHU NHAT ====\n");
    printf("Chieu dai : %d\n", dai);
    printf("Chieu rong: %d\n", rong);
    printf("Chu vi    : %d\n", ChuviHCN);
    printf("Dien tich : %d\n", DientichHCN);

    //===============
    // HINH TRON 
    //===============
    float r;
    printf(" \nNhap ban kinh:  ");
    scanf("%f" , &r);
    
    float chuviHT = 2 * PI * r ;
    float dientichHT = PI * r * r ;
    
    printf("\n==== HINH TRON ====\n");
    printf("Ban kinh  : %.2f\n" , r);
    printf("Ban kinh  : %.2f\n" , chuviHT);
    printf("Dien tich : %.2f\n" , dientichHT);
    
    return 0;



}