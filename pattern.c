#include<stdio.h>
int main()
{
    int i,j;
    for (int z=1;z<=4;z++)
    {  
      for (int k=1;k<=z;k++)
    printf(" ");
        for (i=z;i<=4;i++)
    {
    printf("%d",i);
    }
    for (j=4;j>=z;j--)
    {printf("%d",j);}
    
    
    printf("\n");
    }
    return 0;
}


        *
       * *
      * * * 
     * * * *
      * * *
       * *
        *
