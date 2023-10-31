#include<stdio.h>
#include<math.h>
void main()
{
int n, sum=0, sum2=0, i, fa;
float sum3=0.0, f=1;
printf("Enter the value of n: ");
scanf("%d", &n);

for(i=1; i<=n; i++)
{
  
// first series
sum = sum + i*i;

// second series
if(i%2==0)
{
sum2 = sum2 - i;
}
else
{
sum2 = sum2 + i;
}

// third series
f = f * i;
sum3 = sum3 + i/f;
  
}

printf("\nFirst Series: %d", sum);
printf("\nSecond Series: %d", sum2);
printf("\nThird Series: %f", sum3);

// Armstrong Number for n digits
int number, original, temp, digit=0, s=0;
printf("Enter number: ");
scanf("%d", &number);
original = number;
temp = number;

while(number!=0)
{
digit += 1;
number = number/10;
}

while(temp!=0)
{
s = s + pow(temp%10, digit);
temp = temp/10;
}

if(original==s)
{
printf("Armstrong number.");
}
else
{
printf("Not an armstrong number.");
}
}
