#include<stdio.h>
//que-1
/*int fact(int);
int main()
{
    int n,k;
    printf("enter the no.");
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);
    return 0;
}
int fact(int i)
{
    int s;
    if(i==0)
    return 1;
    s=i*fact(i-1);
    
    return s;
}
// que-2
//int hcf(int,int);
int main()
{
    int d,n,k;
    printf("enter the no.");
    scanf("%d%d",&d,&n);
    k=hcf(d,n);
    printf("%d",k);
    
    return 0;
}
int hcf(int a,int b)
{

   if(a>b)
      {
        if(a%b==0)
           return b;
        
             return hcf(a%b,b);
            // return d;
      }
      else
      {
        if(b%a==0)
           return 0;
         
            return hcf(a,b%a);
           // return e;
      }
}
//que-3
int fib(int n)
{
    if(n==0 || n==1)
    return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n)
{
    if(n>=0)
    {
      printFib(n-1);
      printf("%d\n",fib(n));
    }
}
int main()
{
    printFib(10);
    printf("\n");
    return 0;
}
//que-4
int countDigit(int x)
{
    if(x==0)
       return 0;
    return countDigit(x/10)+1;
}
int main()
{
    printf("%d",countDigit(12345));
    printf("\n");
    return 0;
}*/