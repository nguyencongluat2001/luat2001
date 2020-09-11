#include<stdio.h>
int main(void)
{
int a;
printf("nhap ban kinh duong tron vao day:  ");
scanf("%d",&a);
    const double PI=3.14;
float b, c ;
b=a*2*PI;
c=a*a*PI;
printf("chu vi hinh tron co ban kinh la %f\n",b);
printf("dien tich hinh tron co ban kinh %f\n",c);
return 0;
}
