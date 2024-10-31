/*programmer- 24CE096 pethani prakruti
  date of modification - 26 july
  aim-display menu and calculating bill*/
#include <stdio.h>
void main()
{
    //assign the value
    int Choice,Total;
    Total=0;
    printf("MENU INCLUDE THE FOLLOWING:\n1.Burger=150\n2.Pizza=200\n3.Pasta=120\n4.Sandwich=100\n5.French fries=80\n");
    printf("Enter 0 to complete the order.\n\n");
    printf("24CE096_PETHANI PRAKRUTI\n\n");
    //involve while loop to involve 0 to finish the order
    while(1){
         printf("Enter your Choices between 0-5:");
         scanf("%d",&Choice);

    //switch for condition
    switch(Choice){
        case 0:
            printf("Order completed.\n");
            printf("Total bill: %d\n",Total);
            return 0;

        case 1:
            Total+=150;
            break;
        case 2:
            Total+=200;
            break;
        case 3:
            Total+=120;
            break;
        case 4:
            Total+=100;
            break;
        case 5:
            Total+=80;
            break;
        default:
            printf("oops wrong Choice!!");

        }
    }

   }
