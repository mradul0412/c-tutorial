#include<stdio.h>
//que-1
/*int main()
{
    int a[10],i,sum=0;
    printf("enter the 10 no.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    sum=sum+a[i];
    printf("sum is %d",sum);
    return 0;
}
//que-2
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter the 10 no.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    {
    sum=sum+a[i];
    avg=sum/10.0;
    }
    printf("the is %f",avg);
    
    return 0;

}
//que-3
int main()
{
    int a[10],i,se=0,so=0,n;
    printf("enter the 10 no.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    {  
        if(a[i]%2==0)
        se=se+a[i];
        else 
        so=so+a[i];
        
    }
    printf("sun of even no is %d",se);
    printf("sum of odd no is %d",so);
    return 0;
}
//que-4
int main()
{
    int a[10],i,max;
    printf("enter the 10 no.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
max=a[0];
    for(i=1;i<=9;i++)
    
     if(max<a[i])
     max=a[i];   
     printf("max value is %d",max);   
    
    
    return 0;
}*/
//que-5
int main()
{
    int a[10],i,min;
    printf("enter the 10 no.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
min=a[0];
    for(i=1;i<=9;i++)
    
     if(min>a[i])
     min=a[i];   
     printf("min value is %d",min);   
    
    
    return 0;
}