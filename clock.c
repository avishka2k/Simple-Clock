#include<stdio.h>
#include<windows.h>
int main()
{
     int S,M,H;

     printf("S : ");
     scanf("%d",&S);
     printf("M : ");
     scanf("%d",&M);
     printf("H : ");
     scanf("%d",&H);   
       
       while(1){
            S++;
             if(59<S){
                  M++;
                  S=0;
             }
             if(59<M){
                  H++;
                  M=0;
             }
             if(12<=H){
                printf("12:00:00");
               
                exit(0);
                 
             }
          printf("%.2d:%.2d:%.2d",H,M,S);
          Sleep(1000);
          system("cls");
       }
}