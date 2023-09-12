#include<stdio.h>
#include<math.h>

void main()
{

// print my name
printf("Arsh Javed");

// find area and perimeter of a circle
int r, area, perimeter;
const int pi = 3.14;
printf("\nEnter radius of circle:");
scanf("%d", &r);
area = pi * r * r;
perimeter = 2 * pi * r;
printf("\nArea of circle: %d", area);
printf("\nPerimeter of circle: %d", perimeter);

// find volume of a cone
int h, re;
float volume;
printf("\nEnter height and radius of cone respectively:");
scanf("%d%d", &h, &re);
volume = (pi * re * re * h)/3;
printf("\nVolume of Cone: %f", volume);

// find volume and surface area of sphere
int rea, v, sa;
printf("\nEnter radius of sphere:");
scanf("%d", &rea);
v = 4/3 * pi * rea * rea * rea;
sa = 4 * pi * rea * rea;
printf("\nVolume of Sphere: %d", v);
printf("\nSurface Area of Sphere: %d", sa);

// swapping two variables without using third variable
int a, b;
printf("\nEnter two number A and B");
scanf("%d%d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("\nVariable A after swapping is %d", a);
printf("\nVariable B after swapping is %d", b);

// finding area of scalene triangle
int s1, s2, s3, S;
float area;
printf("\nEnter sides of scalene triangle:");
scanf("%d%d%d", &s1, &s2, &s3);
S = (s1 + s2 + s3)/2;
area = sqrt(S * (S - s1) * (S - s2) * (S - s3));
printf("\nArea of scalene triangle is %f", area);

// Calculate simple interest
float p, rate, time, si;
printf("\nEnter principal amount, rate of interest and time respectively:");
scanf("%f%f%f", &p, &rate, &time, &si);
si = (p * r * t)/100;
printf("\nSimple Interest is %f", si);

// Calculate compound interest
float principal, roi, t, ci;
printf("\nEnter principal amount, rate of interest and time respectively:");
scanf("%f%f%f", &principal, &roi, &t);
ci = principal * (pow((1 + roi/100), t));
printf("\nCompound Interest is %f", ci);

}
