#include<stdio.h>
#include<math.h>

void main()
{
// Convert temperature from Fahrenheit to Centigrade
float temp, c;
printf("\nEnter temperature in Fahrenheit: ");
scanf("%f", &temp);
c = (temp - 32) * 5/9;
printf("\nTemperature in Centigrade: %f", c);

// Convert seconds time into hours, minutes and seconds
int time, hours, minutes, seconds, tem;
printf("\n\nEnter time in seconds: ");
scanf("%d", &time);
hours = time/3600;
tem = time%3600;
minutes = tem/60;
seconds = tem%60;
printf("Time: %dhr %dmin %dsec", hours, minutes, seconds);

// Swap two numbers without using third variable
int a,b;
printf("\n\nEnter two numbers to swap: ");
scanf("%d%d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("First Number: %d\nSecond Number: %d", a, b);

// Find total volume of ice creams 
int num;
float volume, radius, height;
printf("\n\nEnter radius and height of the cone respectively: ");
scanf("%f%f", &radius, &height);
volume = (1/3) * 3.14 * radius * radius * height;
printf("\nEnter number of cones needed: ");
scanf("%d", &num);
volume = num * volume;
printf("\nTotal volume: %f", volume);


// Distance between two points
float x1, y1, x2, y2, dis;
printf("\n\nEnter points X1, X2, Y1, Y2 respectively: ");
scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
printf("\nDistance between these points is: %f\n", dis);
}
