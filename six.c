// Write a C program to calculate Fahrenheit to Celsius
#include<stdio.h>
int main(){
    float fa;
    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fa);

    float c = (((fa-32)*5)/9);
    printf("Temperature in Celsius: %f",c);
    return 0;
}