#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks out of 100: ",m);
    scanf("%d",&m);
    if(m<0||m>100)
       {
          printf("Wrong Entry");
       }
    else if(m<40)
       {
          printf("Your Grade is F");
       }
    else if(m<=54)
       {
          printf("Your Grade is D");
       }
    else if(m<=69)
       {
          printf("Your Grade is C");
       }
    else if(m<=84)
       { 
          printf("Your Grade is B");
       }
    else if(m<=100)
       {  
          printf("Your Grade is A");
       }
    return 0;
} 
