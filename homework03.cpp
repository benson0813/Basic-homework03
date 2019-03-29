#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float height,m,weight,BMI; 

    printf("======您的BMI資訊======\n"); 

    printf("請輸入身高：");

    scanf("%f",&height);

    printf("請輸入體重：");

    scanf("%f",&weight);

    printf("=======================\n");

    m=height/100;

    BMI=weight/(m*m);

    printf("您的BMI為 %.2f\n\n",BMI);

    system("pause");

    return 0;

}
