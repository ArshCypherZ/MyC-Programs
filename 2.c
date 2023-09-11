#include<stdio.h>

void main()
{
int age;
printf("\nEnter your age:");
scanf("%d", &age);
(age >= 18) ? printf("\nEligible for vote") : printf("\nNot Eligible for vote");

int num;
printf("\n\nEnter the number to check if it is multiple of 7 or not:");
scanf("%d", &num);
(num % 7 == 0) ? printf("\nMultiple of 7") : printf("\nNot a multiple of 7");

int a, b;
printf("\n\nEnter two numbers:");
scanf("%d%d", &a, &b);
printf("\nOutput for AND Operator %d", a & b);
printf("\nOutput for OR Operator %d", a | b);
printf("\nOutput for XOR Operator %d", a ^ b);
printf("\nOutput for LEFT SHIFT Operator %d", a << b);
printf("\nOutput for RIGHT SHIFT Operator %d\n", a >> b);
}


