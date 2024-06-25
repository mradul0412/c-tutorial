#include<stdio.h>
// que-1 size of character constent 
/*int main()
{
    printf("%d",sizeof('a'));
    return 0;
} 
//que-2 size of real constent 
int main()
{
    printf("%d",sizeof('2.3'));
    return 0;
}
//que-4 s
int main()
{
    int a,b,n;
    printf("enter the variable" );
    scanf("%d%d",&a,&b);

    n=a;
    a=b;
    b=n;
    

    printf("swap value a= %d and b= %d",a,b);
    return 0;
}
//que-5 swap value of two int variable without using third variable 
int main()wap value of two int variable 
{
    int a,b;
    printf("enter the variable ");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d and %d",a,b);
return 0;
}
//que-6 swap value of two int variable without using third variable and without using + - oprator 
int main()
{
    int a,b;
    printf("enter the variable");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d and %d",a,b);
    return 0;
}*/
//que-7 swap value of two int variable without using third variable without using third variable and arthmetic operators 
int main()
{
    int a,b;
    printf("enter the variable");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d and %d ",a,b);
    return 0;

}
