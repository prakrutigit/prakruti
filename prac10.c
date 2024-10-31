/*programmer:24CE096_pethani prakruti
  date of modification: 2 august 2024
  Aim: setting a countdown timer using while loop*/
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    i=0;
    //loop upto i=0 i.e; it will print countdown completed
    while(n>=0)
    {
        printf("%d\n",n);
        n--;
    }
     printf("Countdown Completed!!\n\n");
     printf("24CE096_PETHANI PRAKRUTI\n");
}
