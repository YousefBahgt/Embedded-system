#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    int tem_f ;
    float tem_c ,tem_k ;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d" , &tem_f);
    tem_c = (tem_f - 32) * (5.0/9);
    tem_k = tem_c + 273.15;
    printf("Temperature in Celsius = %.2f \nTemperature in Kelvin = %.2f \n", tem_c , tem_k);

    */
    /*
    int sec , hour , min , r;
    printf("Enter your time in Seconds : ");
    scanf("%d", &sec );
    hour = sec /3600.0 ;
    r = sec % 3600;
    min = r /60.0 ;
    sec = sec %60 ;
    printf ("Hours : %d minutes : %d Seconds : %d  " ,hour,min,sec);
    */
    /*
    int a,b,c;
    printf("Enter your first value :");
    scanf("%d",&a);
    printf("Enter your second value :");
    scanf("%d",&b);
    printf("the original value are first = %d and second = %d \n",a,b);
    c = a;
    a = b;
    b = c;
    printf("the swaping value are first = %d and second = %d ",a,b);
    */
    /*
    int a,b;
    printf("Enter your first value :");
    scanf("%d",&a);
    printf("Enter your second value :");
    scanf("%d",&b);
    printf("the original value are first = %d and second = %d \n",a,b);
    a = a - b ;
    b = b + a;
    a = b - a;
    printf("the swaping value are first = %d and second = %d ", a , b);
    */
    char num[3] , new_num[3] ;
    printf("enter your number : ");
    scanf("%s" , num);
    int len = strlen(num);
   if (len == 3) {
        // Swap the first and last characters
        char new_num = num[3];
        num[0] = num[2];
        num[2] = new_num;
}
printf("%s",new_num);
    return 0;
}
