#include <stdio.h>
int main ()
{
    int a,b;
    float x;
    while( 1==1 )
    {
        printf("Nhap a,b : ");
        scanf("%d%d" , &a, &b);
        if(a==0)
        {
            printf("Phuong trinh vo nghiem : ");
        }
        else
        {
            x=-(float)a/b;
            printf("Phuong trinh %dx +%d = 0 co nghiem x = %.2f" , a,b,x);
        }
        return 0;
    }
}