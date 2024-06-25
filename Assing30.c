#include<stdio.h>
//que-1
/*int main()
{
    int a[10],i,round,t;
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(round=1;round<=9;round++)
    {
          for(i=0;i<=9-round;i++)
              {
                if(a[i]>a[i+1])
                  {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                  }
              }  
    }
    for(i=0;i<=9;i++)
    printf(" %d",a[i]);
     
    return 0;
}
//que-2
int main()
{
    int a[10],i,max,secondmax;
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    max=a[0];
    if(max<a[1])
    {
      secondmax=max;
      max=a[1];
    }
    else
       secondmax=a[1];
       
       for(i=2;i<=9;i++)
       {
        if(a[i]<=secondmax)
        continue;
          if(a[i]<=max)
          {
            secondmax=a[i];
            continue;
          }
          secondmax=max;
          max=a[i];
       }
       printf("secondmax is %d",secondmax);
       return 0;
}
//que-3
int main()
{
    int a[10],i,small,secondsmall;
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    small=a[0];
    if(small>a[1])
    {
      secondsmall=small;
      small=a[1];
    }
    else
       secondsmall=a[1];
       
       for(i=2;i<=9;i++)
       {
        if(a[i]>=secondsmall)
        continue;
          if(a[i]>=small)
          {
            secondsmall=a[i];
            continue;
          }
          secondsmall=small;
          small=a[i];
       }
       printf("second small is %d",secondsmall);
       return 0;
}
//que-4
int main()
{
    int a[10],i,round,t;
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(round=1;round<=9;round++)
    {
          for(i=0;i<=9-round;i++)
              {
                if(a[i]<a[i+1])
                  {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                  }
              }  
    }
    for(i=0;i<=9;i++)
    printf(" %d",a[i]);
     
    return 0;
}*/
//que-5
int main()
{
    int a[10],i,b[10];
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    b[i]=a[i];
    for(i=0;i<=9;i++)
    printf("%d",a[i]);
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d",b[i]);
    return 0;
}

