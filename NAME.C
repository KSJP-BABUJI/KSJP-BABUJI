/* Write C program to rearrange the elements of an array in such a way
that the zero elements folloed by non-zero elements */
#include<stdio.h>
void main()
{
 int a[50],i,j,t,n;
 clrscr();
 printf("How many numbers ");
 scanf("%d",&n);
 printf("Enter the numbers\n");
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
   if(a[i]!=0)
   continue;
   for(j=i+1 ; j<n ; j++)
   if(a[j]!=0)
   {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
     break;
   }
 }
 printf("\nGiven numbers in required format");
 for(i=0;i<n;i++)
 printf("%d  ",a[i]);
 getch();
}