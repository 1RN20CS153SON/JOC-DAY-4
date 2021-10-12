/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
        int Mrint[7], i,d=0,df=0 , high=0;
        float Mrfloat[7],highf=0;
        char Mrchar[7] , days[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        printf("Enter the daily wages of Mrint in a week\n");
        for(i=0;i<6;i++)
         scanf("%d",&Mrint[i]);

         printf("Enter the daily wages of Mrfloat in a week\n");
        for(i=0;i<6;i++)
         scanf("%f",&Mrfloat[i]);

        for(i=0;i<6;i++)
        {
         if(Mrint[i]>high)
         {
            high=Mrint[i];
            d=i;
         }
        }
        for(i=0;i<6;i++)
        {
         if(Mrfloat[i]>highf)
         {
            highf=Mrfloat[i];
            df=i;
         }
        }
        printf("\nThe Mrint gets highest salary on %s thats %d and he can have party on %s\n" ,days[d],high,days[d]);
        printf("\nThe Mrfloat gets highest salary on %s thats %f and he can have party on %s\n" ,days[df],highf,days[df]);

    return 0;
}
