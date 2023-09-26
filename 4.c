#include<stdio.h>
void main()
{


// Reverse the number
int n, i, rem, rev=0;
printf("Enter number to reverse: ");
scanf("%d", &n);
while (n!=0)
{
	rem = n % 10;
	rev = rev * 10 + rem;
	n = n / 10;
}
printf("Reversed number is: %d", rev);


// Fibonacci Series
int a, c, num, x=0, y=1;
printf("\n\nEnter number of terms for fibonacci series: ");
scanf("%d", &a);
printf("0, ");
for (c=1; c<a; c++)
{
	num = x + y;
	printf("%d, ", num);
	y = x;
	x = num;
}


// Average of n numbers
int p, q;
float avg, na, sum=0;
printf("\n\nEnter how many numbers you want me to calculate average for: ");
scanf("%d", &p);
for (q=1; q<=p; q++)
{
	printf("\nEnter number %d: ", q);
	scanf("%f", &na);
	sum = sum + na;
}
avg = sum/p;
printf("Average: %f", avg);


// Palindrome Number
int number, remainder, reverse=0, temp;
printf("\n\nEnter number to check for palindrome: ");
scanf("%d", &number);

temp = number;

while (number!=0)
{
	remainder = number % 10;
	reverse = reverse * 10 + remainder;
	number = number/10;
}
if (reverse==temp)
{
	printf("Palidrome Number");
}
else
{
	printf("Not a Palindrome Number");
}


}
