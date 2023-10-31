#include<stdio.h>
void main()
{
 
// Question A
int n, i, j, a, b, c, d, e, f, g, h, k, l, m, o;
printf("Enter number of rows and columns: ");
scanf("%d", &n);
 
for(i=1; i<=n; i++)
{
for(j=1; j<=i; j++)
{
printf("@");
}
printf("\n");
}
 
 
// Question B
for(a=1; a<=n; a++)
{
for(b=1; b<=n-a+1; b++)
{
printf("*");
}
printf("\n");
}
 
// Question D
for(c=1; c<=n; c++)
{
for(d=1; d<=c; d++)
{
printf("%d", c);
}
printf("\n");
}
 
// Question E
for(c=1; c<=n; c++)
{
for(d=1; d<=c; d++)
{
printf("%d", d);
}
printf("\n");
}
 
// Question F
for(e=1; e<=n; e++)
{
for(f=1; f<=e; f++)
{
printf("%d", (f+1)%2);
}
printf("\n");
}
 
 
// Question G
int z=0;
for(g=1; g<=n; g++)
{
for(h=1; h<=g; h++)
{
printf("%d", (z++)%2);
}
printf("\n");
}
 
 
// Question H
int y=0;
for(k=1; k<=n; k++)
{
for(l=1; l<=k; l++)
{
printf("%d", ++y);
}
printf("\n");
}
 
// Question I
for(m=1; m<=n; m++)
{
for(o=1; o<=n; o++)
{
printf("#");
}
printf("\n");
}
 
}
