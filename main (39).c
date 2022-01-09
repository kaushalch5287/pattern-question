/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("%d ",n+1-j);
printf("\n");
}


    return 0;
}
