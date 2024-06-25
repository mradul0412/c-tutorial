#include<stdio.h>
//que-1
int f1(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=f1(n);
    printf("%d",k);
    return 0;
}
int f1(int i)
{
    int s;
    if(i==1)
    return 1;
    s=i+f1(i-1);
    
    return s;
}
/*//que-2
int oddsum(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=oddsum(n);
    printf("%d",k);
    return 0;
}
int oddsum(int i)
{
    int s;
    if(i==1)
    return 1;
    s=2*i-1+oddsun(i-1);
    
    return s;
}
//que-3
int evensum(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=evensum(n);
    printf("%d",k);
    return 0;
}
int evensum(int i)
{
    int s;
    if(i==1)
    return 2;
    s=2*i+evensum(i-1);
    
    return s;
}
//que-4
int squaresSum(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=squaresSum(n);
    printf("%d",k);
    return 0;
}
int squaresSum(int i)
{
    int s;
    if(i==1)
    return 1;
    s=i*i+squaresSum(i-1);
    
    return s;
}
//que-5
int digitSum(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=digitSum(n);
    printf("%d",k);
    return 0;
}
int digitSum(int i)
{
    int s;
    if(i==1)
    return 1;
    s=i%10+digitSum(i/10);
    
    return s;
}*/
