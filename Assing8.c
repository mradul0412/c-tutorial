#include<stdio.h>
/*//que-1
int main()
{
    int a;
   printf("enter the three digit no");
   scanf("%d",&a);
   if(a>99 && a<1000)
   {
    printf("yes it is a 3 digit no");
   } 
   else 
   {
    printf("no it is not a 3 digit no");
    return 0;
   }
}
// que-2
int main()
{
    int a,b;
    printf("enter the two no");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d",&b);
     }
    else
            {
                printf("%d",&a);
            }
            return 0;
            }
    // que-3      

int main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0);
    {
        printf("real and ")
    }
    }
    // que-4
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%100)
     if(year%4)
     {
        printf("%d not a leap year",year);
     }
     else
     {
     printf("%d is a leap year",year);
}
else 
if(year%400)
{
    printf("%d is a not a leap year",year);
    }
    else{
        printf("%d is a leap year",year);
    }
    return 0;
}*/
//que-5
int main()
{
    int a,b,c;
    printf("enter three no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
       if(a>c)
    {
        printf("%d is greater",a);
    }
    else if(b>c)
    {
        printf("%d is greater",b);
    }
    else {
        printf("%d is greater",c);
    }
    return 0;
}