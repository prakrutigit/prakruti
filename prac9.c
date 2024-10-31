*/*programmer:24ce096_pethani prakruti
  date of modification: 29 july 2024
  Aim: Grade  giving and marks*/
#include<stdio.h>
void main(){
    //assign the variable
    int Marks;
    printf("ENTER YOUR MARKS:");
    scanf("%d",&Marks);
    //to make marks between 0-100
    if(Marks>=0 & Marks<=100){
            (Marks>=90)?printf("YOUR GRADE IS A\n\n"):(Marks>=80 & Marks<90)?printf("YOUR GRADE IS B\n\n"):(Marks>=70 & Marks<80)
            ?printf("YOUR GRADE IS C\n\n"):(Marks>=60 & Marks<70)?printf("YOUR GRADE IS \n\n"):(Marks<60)?printf("YOUR GRADE IS F\n\n"):("YOU FAIL");
    }
    else{
            ("PLEASE ENTER MARKS BETWEEN 0-100\n\n");
    }
    printf("24CE096_PETHANI PRAKRUTI\n");


}
