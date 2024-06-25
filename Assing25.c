#include<stdio.h>
/*//que-1
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
//que-2
void printN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    printN(i);
    
    return 0;

}
void printN(int n)
{  int s;
    if(n>0)
    {
    printN(n-1);
    printf("%d ",n);
    }
}
//que-3
void printN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    printN(i);
    
    return 0;

}
void printN(int n)
{  int s;
    if(n>0)
    {
   
    printf("%d ",n);
    printN(n-1);
    }
}*/
//que-4
void oddN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    oddN(i);
    
    return 0;

}
void oddN(int n)
{  int s;
    if(n>0)
    {
    oddN(n-1);
    printf("%d ",2*n-1);
    
    }
}
/*//que-5
void evenN(int);
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
    evenN(n-1);
    printf("%d ",2*n+1);
    
    }
}
//que-6
void oddN(int);
int main()
{
    int i,j;
    printf("enter the no");
    scanf("%d",&i);
    oddN(i);
    
    return 0;

}
void oddN(int n)
{  int s;
    if(n>0)
    {
    //oddN(n-1);
    printf("%d ",2*n-1);
    oddN(n-1);
    }
}*/

