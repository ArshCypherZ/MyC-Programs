#include<stdio.h>
#include<math.h>

void main()
{
float temp, c;
printf("\nEnter temperature in Fahrenheit: ");
scanf("%f", &temp);
c = (temp - 32) * 5/9;
printf("\nTemperature in Centigrade: %f", c);


int time, hours, minutes, seconds, tem;
printf("\n\nEnter time in seconds: ");
scanf("%d", &time);
hours = time/3600;
tem = time%3600;
minutes = tem/60;
seconds = tem%60;
printf("Time: %dhr %dmin %dsec", hours, minutes, seconds);

int a,b;
printf("\n\nEnter two numbers to swap: ");
scanf("%d%d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("First Number: %d\nSecond Number: %d", a, b);


float x1, y1, x2, y2, dis;
printf("\n\nEnter points X1, X2, Y1, Y2 respectively: ");
scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
printf("\nDistance between these points is: %f\n", dis);
}
