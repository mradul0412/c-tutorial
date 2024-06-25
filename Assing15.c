#include<stdio.h>
//que-1
/*int main()
{
    int i,s,n;
    for(s=1;s<=100;s++)
    {
    for(i=2;i<s;i++)
    if(s%i==0)
    {
      
        break;
    }
    if(i==s)
    printf("%d \n",s);
    }
    return 0;
}
 // que-2
int main()
{
    int i,s,n,t;
    printf("enter the no.");
    scanf("%d%d",&n, &t);
    for(s=n;s<=t;s++)
    {
    for(i=2;i<t;i++)
    if(s%i==0)
    {
      
        break;
    }
    if(i==s)
    printf("%d \n",s);
    }
    return 0;
}
// que-3
int main()
{
    int i,s,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(s=n; ;s++)
    {
    for(i=2;i<s;i++)
    if(s%i==0)
    {
      
        break;
    }
    if(i==s)
   
   { printf("%d \n",s);
    break;
   }
    }

    return 0;
}
//que-4
int main()
{
    int n1,n2,i,h;
    printf("enter the no");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
     { i=n1; }
      else
      {i=n2;}
    for(h=i;h>=1;h--)
    {
        if(n1%h==0 && n2%h==0)
        break; 
    }
    printf("hcf is %d",h);
    return 0;
    
} */
//QUE-5
int main()
{
    int n1,n2,i,h;
    printf("enter the no");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
     { i=n1; }
      else
      {i=n2;}
    for(h=i;h>=1;h--)
    {
        if(n1%h==0 && n2%h==0)
        break; 
    }
    if(h==1)

    printf("co-prime");
    else
    printf("not a co-prime");
    return 0;
    
} 