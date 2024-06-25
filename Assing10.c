#include<stdio.h>
//que-1
/*int main()
{
    int i;
    printf("enter the no.");
    scanf("%d",&i);
    if(i>=1)
    {
        printf("the given no. is positiv");
    }
    else if(i==0)
    {
        printf("the given no. is zero");
    }
    else 
    {
        printf("the given no. is negative");
    }
    return 0;
}
//que-2
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("the given char is lowercase");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("the given char is upper case");
    }
    else if(ch>=0 && ch<=9)
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}
//que-3
int main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("valid tringle");
    }
    else 
    {
        printf("not a tringle ");

    }
    return 0;
}*/
// que-4
int main()
{
    int n;
    printf("enter the month no.");
    scanf("%d",&n);
    if(n<1 && n>12)
    {
        printf("not valid month no.");
    }
    else if(n==2)
    {
        printf("28 days");
    }
    else if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("31 days");
    }
    else 
    {
        printf("30 days ");
    }
     return 0;
    }