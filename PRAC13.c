/*programmer:24ce096_PETHANI PRAKRUTI
  date of modification: 5 august 2024
  Aim: to calculate the total cost of event held on even days of month*/

#include<stdio.h>
void main(){
     int Row,Column,i,j;
     printf("Enter the size of table vertically:");
     scanf("%d",&Row);
     printf("Enter the size of table horizontally:");
     scanf("%d",&Column);
     //loop statement for getting output as a table form.
     for(i=1;i<=Row;i++){
            for(j=1;j<=Column;j++){
            printf("%4d",i*j);
            }
      printf("\n");


     }
     printf("\n24CE096_PETHANI PRAKRUTI\n");
}
