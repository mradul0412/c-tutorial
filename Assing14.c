#include<stdio.h>
//que-1
/*int main()
{
    int i,n,sum=1;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
// que-2
int main()
{
    int n,i=0;
    printf("enter the no");
    scanf("%d",&n);
    while(n>0)
    {
        i++;
        n=n/10;
    }
    printf("%d",i);
    return 0;
}*/
// que-3
int main()
{
    int i,s,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
    {
        printf("non prime");
        break;
    }
    if(i==n)
    printf("prime");
    return 0;
}
// que-4
/*int main()
{
    int n1,n2,i;
    printf("enter the no");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
        break; 
    }
    printf("lcm is %d",i);
    return 0;
    
}
// que-5
int main()
{
    int i,j=0,k;
    printf("enter the no");
    scanf("%d",&i);
    while(i)
    {
        k=i%10;
        j=j*10+k;
        i=i/10;
    }
    printf("%d",j);
    return 0;
}*/