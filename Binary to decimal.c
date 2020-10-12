#include <math.h> 
#include <stdio.h> 
int bin( long n); 
int dec( int m);
int main() 
{ 
long n;
int m;
printf("Enter a binary number: ");
 scanf("%d", &n); 
printf("\n %d in binary = %d in decimal", n, bin(n));
printf("\n enter a decimal number: ");
scanf("%d",&m);
printf("\n %d in decimal = %d in binary", m, dec(m));
return 0; 
} 
int bin( long n)
 { 
int dec = 0, i = 0, rem;
 while (n != 0)
 { 
rem = n % 10; 
n /= 10;
 dec += rem * pow(2, i);
 ++i; 
} 
return dec;
 }
int dec(int m)
 {
 long bin = 0;
 int rem, i = 1, step = 1;
 while (m != 0)
 { 
rem = m% 2;
 printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, m, rem, m/ 2);
 m/= 2; 
bin += rem * i; 
i *= 10; 
} 
return bin;
 }
