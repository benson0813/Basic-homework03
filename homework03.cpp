#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float height,m,weight,BMI; 

    printf("======�z��BMI��T======\n"); 

    printf("�п�J�����G");

    scanf("%f",&height);

    printf("�п�J�魫�G");

    scanf("%f",&weight);

    printf("=======================\n");

    m=height/100;

    BMI=weight/(m*m);

    printf("�z��BMI�� %.2f\n\n",BMI);

    system("pause");

    return 0;

}
