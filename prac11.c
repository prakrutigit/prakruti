/*programmer:24ce096_pethani prakruti
  date of modification: 2 august 2024
  Aim: matchstick game between user and computer*/
#include<stdio.h>
int main(){
     int Tot_Match,User_Match,Computer_Match;
     Tot_Match=21;
     //taking input of matchsticks
     while(Tot_Match>=1){
     printf("The total number of matchsticks are %d\n",Tot_Match);
     printf("Enter the matchsticks you want to pick between 1-4:");
     scanf("%d",&User_Match);
     if(User_Match>4){
        printf("INVALID ENTRY");
        break;
     }

    //5 so that last goes to user so that computer can win as user is only left with one stick
    Computer_Match=5-User_Match;
    printf("computer picks up the %d matchsticks.\n\n",Computer_Match);
    Tot_Match=Tot_Match-User_Match-Computer_Match;
    if(Tot_Match==1){
            printf("\n    You have been lost via computer.   \n\n");
            break;
            }


     }
     printf("24CE096_PETANI PRAKRUTI\n");
     return 0;


}
