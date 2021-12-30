/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//5 5 5 5 5
//4 4 4 4 
//3 3 3 
//2 2 
//1 
#include <stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
printf(" %d",j);
printf("\n");
}


    return 0;
}
