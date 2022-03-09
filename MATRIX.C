#include<stdio.h>
#include<conio.h>
void main()
{
  int num[4][4];
  int r,c,sum;
  clrscr();
  printf("\n please enter number");
  for(r=0 ; r<=2; r++)
  {
   for(c=0;c<=2;c++)
   {
    scanf("%d",&num[r][c]);
    }
    }
    printf("\n");
    printf("\n You have entered : \n");
  for(r=0 ; r<=2; r++)
  {
   for(c=0;c<=2;c++)
   {
    printf("%4d",num[r][c]);
    }
    printf("\n");
    }
    for(r=0;r<=2;r++)
    {
    sum=0;
     for(c=0;c<=2;c++)
     {
      sum=sum+num[r][c];
      }
      num[r][3]=sum;
      }
       printf("\n You have entered : \n");
  for(r=0 ; r<=2; r++)
  {
   for(c=0;c<=3;c++)
   {
    printf("%4d",num[r][c]);
    }
    printf("\n");
    }
     for(c=0;c<=2;c++)
    {
    sum=0;
     for(r=0;r<=2;r++)
     {
      sum=sum+num[r][c];
      }
      num[r][3]=sum;
      }
       printf("\n You have entered : \n");
  for(r=0 ; r<=2; r++)
  {
   for(c=0;c<=3;c++)
   {
    printf("%4d",num[r][c]);
    }
    printf("\n");
    }
    getch();
    }
