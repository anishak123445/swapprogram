#include<stdio.h>
main()
{int temp,a,b;
 printf("enter the value of a and b: ");
 scanf("%d %d",&a,&b);
 printf("values before swapping %d and %d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("values after  swapping %d and %d",a,b);
 return 0;
}
