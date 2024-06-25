#include<stdio.h>
/*//que-1
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<=6-i)
        {
        printf("*");
        }
        else
        {
            printf("#");

        }
        printf("\n");
    }
    return 0;
}*/
// que-2
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        if(j>=5-i && j<=3+i )
        {
        printf("*");
        }
    else
    {
        printf(" ");
    }
        printf("\n");
    }
    return 0;
}
/*// que-3
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<=i)
        {
        printf("*");
        }
        else
        {
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}
// que-4
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j>=6-i)
        {
        printf("*");
        }
        else
        {
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}
// que-5
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<=6-i)
        {
        printf("*");
        }
        else
        {
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}
// que-6
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j>=i)
        {
        printf("*");
        }
        else
        {
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}
//que-7
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<=i)
        {
        printf("%d",j);
        
        }
        else
        {
            printf(" ");

        }
        j++;
        printf("\n");
    }
    return 0;
}
// que-8
int main()
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<i)
        {
        printf("%d",i-j);
        }
        else
        {
            printf(" ");

        }
        j++;
        printf("\n");
    }
    return 0;
}
// que-9
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
        if(j>=i)
        //for(n='A';n<='E'; n++)
        printf("%c",k++);
        
        else
            printf(" ");

        }
        
        printf("\n");
    }
    return 0;
}
// que-10
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
       { if(j<i)
        {
        printf("%d",j+i-2);
        
        }
        else
        {
            printf(" ");

        }
       }
        
        printf("\n");
    }
    return 0;
}
//que-11
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
        if(j>=i)
        //for(n='A';n<='E'; n++)
        printf("%c",k++);
        
        else
            printf(" ");

        }
        
        printf("\n");
    }
    return 0;
}
//que-12
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
        if(i==1||i==5 ||j==1 ||j==5)
        //for(n='A';n<='E'; n++)
        printf("*");
        
        else
            printf(" ");

        }
        
        printf("\n");
    }
    return 0;
}*/
