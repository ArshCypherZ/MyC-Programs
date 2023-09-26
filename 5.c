#include<stdio.h>
void main()
{

  
// Prime Number or Not
int k, c, prime=1;
printf("Enter number: ");
scanf("%d", &k);

if (k<=1)
{
  prime = 0;
}
else
{
  for (c=2; c*c <= k; c++)
  {
    if (k % c == 0)
    {
      prime = 0;
      break;
    }
  }
  if prime
  {
    printf("\nPrime Number");
  }
  else
  {
    printf("\nNot a prime number");
  }

}


// First n natural number using for loop
int n, i;
printf("\n\nEnter value of n: ");
scanf("%d", &n);

for (i=1; i<=n; i++)
{
print("%d", i);
}


// Sum of all numbers between 1 to 100
int c, sum=0;
for (c=1; c<=100; c++)
{
sum = sum + c;
}
printf("%d", sum);


// Factorial of a number
int f, num, fac=1;
printf("\n\nEnter the number: ");
scanf("%d", &num);

for (f=1; f<=num; f++)
{
fac = fac * f;
}
printf("\nFactorial: %d", fac);


// Sum of digits of a number using while loop
int number, re, S=0;
printf("\n\nEnter the number: ");
scanf("%d", &number);

while (n>0)
{
re = number % 10;
S = S + re;
number = number / 10;
}
printf("\nSum of digits: %d", S);

}
