
/*programmer:24ce096_PETHANI PRAKRUTI
  date of modification: 5 august 2024
  Aim: to calculate the Total cost of event held on even Days of month*/

#include<stdio.h>
void main(){
    //taking number of Days
    int Days,Total,n;
    printf("Enter the number of Days the event is organised:");
    scanf("%d",&Days);
    //to add Total so initialing by 0
    Total=0;
    for(n=1;n<=Days;n+=1){
        if(n%2==0){
            Total+=200;
        }
    }
    printf("the Total cost of event in even Days of month is %d\n\n",Total);
    printf("24CE096_PETHANI PRAKRUTI\n");

}
