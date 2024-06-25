#include<stdio.h>
//que-1
int input(int , int);
int main()
{
    int b[10];
    input(b,10);
    return 0;
}
int input(int a[] , int size)
{
    int i,m;
    m=a[0];
    for(i=1;i<=size;i++)
      if(m<a[i])
      m=a[i];
      return m;

}
/*//que-2
int min(int a[] , int size)
{
    int i,m;
    m=a[0];
    for(i=0;i<=9;i++)
      if(m>a[i])
      m=a[i];
      return m;

}
// que-3
void sort(int a[],int size)
{
    int i,round ,t;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i=size-1-round;i++)
        {
            if(a[i]>a[i+1])
           {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
           }
        }
    }
}
//que-4
void rotate(int a[],int size,int n,int d)
{ 
    int temp,shiftcount,i;
    if(d==1)
{
    for(shiftcount=1;shiftcount<=n;shiftcount++)
    {
    temp=a[i-1];
    for(i=size-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=temp;
}
}
if(d==-1)
{
    for(shiftcount=1;shiftcount<=n;shiftcount++)
    {
    temp=a[0];
    for(i=0;i>size-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
}
}
}  
//que-5*/
