#include<stdio.h>
void arm(int a)
{
int rem,sum=0;
int c=a;
while(a>0)
{
rem=a%10;
a=a/10;
sum=sum+(rem*rem*rem);
}
if(c==sum)
{
printf("%d Number is armstrong\n",c);
}
else
{
printf("%d Number is not armstrong\n",c);
}
}
int main()
{
int n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array:\n");
for(int i=0 ; i<n ; i++)
{
	scanf("%d",&a[i]);
}
for(int j=0 ; j<n ; j++)
{
arm(a[j]);
}
return 0;
}


