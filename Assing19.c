#include<stdio.h>
#include<stdlib.h>
//que-1
/*int main()
{
    int month;
    printf("enter the month no.");
    scanf("%d",&month);
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days");
        break;
        case 4: case 6: case 9: case 11: 
        printf("30 days");
        break;
        case 2:
        printf("28 days");
        break;
        default:
        printf("invalid month no.")
    }
    return 0;
}
//que-2
int main()
{
    int choice,a,b;
    while(1)
 {   
    printf("\n1 Addition");
    printf("\n2 Subtraction");
    printf("\n3 Multiplication");
    printf("\n4 Division");
    printf("\n5 Exit");
    printf("\n\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
  {
    case 1:
           printf("enter the no");
           scanf("%d%d",&a,&b);
           printf("sum is %d",a+b);
            break;
    case 2:
           printf("enter the no");
           scanf("%d%d",&a,&b);
           printf("difference is %d",a-b);
           break;
    case 3:
           printf("enter the no");
           scanf("%d%d",&a,&b);
           printf("product is %d",a*b);
           break;
    case 4:
           printf("enter the no");
           scanf("%d%d",&a,&b);
           printf("division is %d",a/b);
           break;
    case 5:
           exit(0);
    default:
           printf("invalid choice");

 }
   }
    return 0;
}
//que-3
int main()
{
    int day;
    printf("enter the day no. (monday==1) ");
    scanf("%d",&day);
    switch(day)
    {
        case 1: 
        printf("jay mahakal");
        break;
        case 2:
        printf("jay shree ram");
        break;
        case 3:
        printf("jay shree krishna");
        break;
        case 4:
        printf("jay mata di");;
        break;
        case 5:
        printf("jay hanuman");
        break;
        case 6:
        printf("radhe radhe");
        break;
        case 7:
        printf("jay shurya dev");
        break;
        default:
        printf("invalid month no.");
    }
    return 0;
}
//que-4
int main()
{
    int choice,a,b,c;

while(1)
{
    printf("\n1 check isosceles tringle ");
    printf("\n2 check right angled tringle");
    printf("\n3 check equilateral tringle");
    printf("\n4 Exit");
    printf("\n\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
  {
    case 1:
                 printf("enter lengths of side of triangle");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a+b>c && b+c>a && a+c>b)
                    if(a==b || b==c || a==c)
                    printf("isosceles triangle");
                    else
                    printf("not an isosceles triangle");
                 else
                    printf("invalid sides of triangle");
                 break;
    case 2:
                 printf("enter lengths of side of triangle");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a+b>c && b+c>a && a+c>b)
                     if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
                     printf("right angled triangle");
                     else
                     printf("not an right angled triangle");
                 else
                    printf("invalid sides of triangle");
                 break;
           
    case 3:
                 printf("enter lengths of side of triangle");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a+b>c && b+c>a && a+c>b)
                    if(a==b && b==c)
                    printf("equilateral triangle");
                    else
                    printf("not an equilateral triangle");
                 else
                    printf("invalid sides of triangle");
                 break;
    
    case 4:
           exit(0);
    default:
           printf("invalid choice");
  }
 
   }
    return 0;
}*/
// que-5
int main()
{
    int n;
    printf("enter the no");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("good");
        break;
        case 2:
        printf("better");
        break;
        case 3:
        printf("best");
        break;
        default :
        printf("invalid");
        break;
    }
    return 0;
}
