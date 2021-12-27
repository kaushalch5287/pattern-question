
// 5
// 4 4
// 3 3 3 
// 2 2 2 2  
// 1 1 1 1 1 
#include <stdio.h>
void main()
{
int i,j,n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
  printf("%3d",n+1-i);
}
printf("\n");
}

}