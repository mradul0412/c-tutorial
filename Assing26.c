#include<stdio.h>
//que-1
/*void evenN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    evenN(i);
    
    return 0;

}
void evenN(int n)
{  int s;
    if(n>0)
    {
    //oddN(n-1);
    printf("%d ",2*n+1);
    evenN(n-1);
    }
}
//que-2
void squaresN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    squaresN(i);
    
    return 0;

}
void squaresN(int n)
{  int s;
    if(n>0)
    {
   
    squaresN(n-1);
    printf("%d ",n*n);
    }
}
//que-3
void dtob(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    dtob(i);
    
    return 0;

}
void dtob(int n)
{  int s;
    if(n>0)
    {
   
    dtob(n/2);
    printf("%d ",n%2);
    }
}
//que-4
void dtoo(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    dtoo(i);
    
    return 0;

}
void dtoo(int n)
{  int s;
    if(n>0)
    {
   
    dtoo(n/8);
    printf("%d ",n%8);
    }
}*/
//que-5
void reverse(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    reverse(i);
    
    return 0;

}
void reverse(int n)
{  int s;
    if(n>0)
    {
     printf("%d ",n%10);
    reverse(n/10);
    
    }
}
