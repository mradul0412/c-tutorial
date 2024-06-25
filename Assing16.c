#include<stdio.h>
 //que-1
/*int main()
{
    int a=-1,b=1,c,n;
    printf("enter the no");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        
        a=b;
        b=c;
        n--;

    }
    printf("%d\n",c);
    return 0;
}
//que-2
int main()
{
    int a=-1,b=1,c,n;
    printf("enter the no");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n--;

    }
    
    return 0;
}
//que-3
int main()
{
    int a=-1,b=1,c,num;
    printf("enter the no");
    scanf("%d",&num);
    while(1)
    {

        
        c=a+b;
        if(c>=num)
        break;
        a=b;
        b=c;

    }
    if(c==num)
    printf("%d found in the series",num);
    else
    printf("%d is not found in the series",num);
    
    return 0;
}
// que-4
int main()
{
int x,y,digitCount=0,sum,r,i,p;
printf("enter the no");
scanf("%d",&x);
y=x;
while(y)
{
   digitCount++;
   y=y/10;
}
for(y=x,sum=0;y;y=y/10)
{
    r=y%10;
    for(p=1,i=1;i<=digitCount;i++)
    {
        p=p*r;
    }
    sum=sum+p;
}
if(sum==x)
printf("%d is an armstrong no.",x);
else
printf("%d is not an armstrong no.",x);
return 0;
}*/
//que-5
int main()
{
int x,y,digitCount=0,sum,r,i,p;
for(x=1;x<=1000;x++)
{
//y=x;
for(digitCount=0,y=x;y;y=y/10)
{
    //digitCount=0;
   digitCount++;
  // y=y/10;
}
for(y=x,sum=0;y;y=y/10)
{
    r=y%10;
    for(p=1,i=1;i<=digitCount;i++)
    {
        p=p*r;
    }
    sum=sum+p;
}

if(sum==x)
printf("%d\n",x);
}
return 0;
}



