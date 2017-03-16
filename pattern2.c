#include<stdio.h>
int main()
{
    int i, j;
    
    
    for (int k=1;k<=4;k++){
    for (i=k;i<=3;i++){ 
    printf(" ");}
      
    for (j=1;j<=k;j++)
    {printf("*");printf(" ");}
    printf("\n");
    }
    
    for (int f=1;f<=3;f++){
    for (int a=1;a<=f;a++){
        printf(" ");
    } 
    for (int b=f;b<=3;b++){
        printf("*");
        printf(" ");
    }
    printf("\n");
    }
    
    
    
    
    
    
    
return 0;    
    }
