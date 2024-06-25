#include<stdio.h>
//que-1
/*int main()
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
//que-2
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        if(j>=i && j<=8-i )
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
//que-3
int main()
{
    int i,j,space;
    for(i=1;i<=4;i++)
    {
        for(j=1,space=1;j<=7;j++)

        
        if(j>=5-i && j<=3+i )
        {
            if(space)
        
        printf("*");
        else
        printf(" ");
        space=1-space;
        }
    else
    {
        printf(" ");
    }
        printf("\n");
    }
    return 0;
}
//que-4
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        if(j>=5-i && j<=3+i )
        {
        printf("%d",k);
        j<4?j++:j--;
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
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        if(j>=i && j<=8-i )
        {
        printf("%c",k++);
        }
    else
    {
        printf(" ");
    }
        printf("\n");
    }
    return 0;
}
//que-6
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        if(j>=i && j<=8-i )
        {
        printf("%c",k);
        j<4?k++:k--;
        }
    else
    {
        printf(" ");
    }
        printf("\n");
    }
    return 0;
}*/
//que-7
int main()
{
    int i,j,space;
    for(i=1;i<=4;i++)
    {
        for(j=1,space=1;j<=7;j++)

        
        if(j>=5-i && j<=3+i )
        {
            if(space)
        
        printf("*");
        else
        printf(" ");
        space=1-space;
        }
    else
    {
        printf(" ");
    }
        printf("\n");
    }
    return 0;
}