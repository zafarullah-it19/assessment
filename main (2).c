/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a)
{int sum=0;
for(int i=0;i<=a;i++){
if(i%3==0 || i%5==0)
  sum+=i;}
  printf("%d",sum);}
int main()
{
    int a;
    scanf("%d",&a);
    sum(a);
    
}

