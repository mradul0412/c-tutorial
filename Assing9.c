#include<stdio.h>
/*int main()
{
    float s,c,x;
    printf("enter the cost price and selling price");
    scanf("%f%f",&s,&c);
    if(s>c)
     {
        x=(s-c)/c*100;
        printf("profit %0.2f%%",x);
     }
     else{
        x=(c-s)/c*100;
        printf("loss %0.2f%%",x);

     }
     return 0;
}
//que-2
int main()
{
   int h,e,m,s,so;
   printf("enter the marks of 5 sub");
   scanf("%d%d%d%d%d",&h,&e,&m,&s,&so);
   if(h>=33 && e>=33 && m>=33 && s>=33 && so>=33)  
   {
      printf("pass");
   } 
   else 
   {
      printf("fail");
   }
   return 0;

}
// que-3
int main()
{
   char ch;
   printf("enter the character");
   scanf("%c",&ch);
   if(ch>='a' && ch<='z')
   {
      printf("alphabetb in lowercase");
   }
   else if(ch>='A'&& ch<='Z')
   {
      printf("alphabet in uppercase");
   }
   else 
   {
      printf("not a alphabet");
   }
   return 0;
}
//que-4
int main()
{
   int a;
   printf("enter the no");
   scanf("%d",&a);
   if(a%2==0 && a%3==0)
   {
      printf("the no. is divisible by 2 and 3");
   }
   else 
   {
      printf("the no. is not divisible by 2 and 3");
   }
   return 0;
}*/
//que-5
int main()
{
   int i;
   printf("enter the no.");
   scanf("%d",&i);
   if(i%7==0 && i%3==0)
   {
      printf("the no. is divisible by 7 and 3");
   }
   else 
   { 
      printf("the no. is not divisible by 7 and 3");
   }
   return 0;
}