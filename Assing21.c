#include<stdio.h>
//que-1
 float area(int);
int main()
{
  int i;
  float s;
  printf("enter the area:");
  scanf("%d",&i);
  s=area(i);
  printf("area of circle is %f",s);
  return 0;
}
float area(int r)
{
    int a;
    a=3.14*r*r;
    return a;
} 
/*// que-2
int si(int ,int, int);
int main()
{
   int a,b,c;
   float d;
   printf("enter the value");
   scanf("%d%d%d",&a,&b,&c);
   d=si(a,b,c);
   printf("simple intrest is %f",d);
   return 0;
}
int si(int p,float r,int t)
{
    float si;
    si=p*r*t/100.0;
    return si;

}*/
//que-3
int isEven(int n)
{
   return n%2==0;
}
//que-4
void printN(int n)
{
  int i;
  for(i=1;i<=n;i++)
  printf("%d ",i);
}
//que-5
void printNodd(int n)
{
  int i;
  for(i=1;i<=n;i++)
  printf("%d",2*i-1);
}