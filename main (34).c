
// 1
// 0 1
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1
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
  if((i+j)%2== 0)
  {
      printf("1");
  }
  else
  {
      printf("0");
  }
}
printf("\n");
}

}