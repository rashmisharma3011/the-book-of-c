#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int month= 0;
     printf("Enter month: ");
    scanf("%d",&month);
  if (month < 1 || month > 12) {
        printf("Invalid");
    } elseif (month == 1){
        printf("January");
    }elseif(month == 2){
        printf("February");
    }elseif(month == 3){
        printf("March");
    }elseif(month == 4){
        printf("April");
    }elseif(month == 5){
        printf("May");
    }elseif(month == 6){
        printf("June");
    }elseif(month == 7){
        printf("July");
    }elseif(month == 8){
        printf("August");
    }elseif(month == 9){
        printf("September");
    }elseif(month == 10){
        printf("October");
    }elseif(month == 11){
        printf("November");
    }elseif(month == 12){
        printf("December");
    }
 
    return 0;
}
  

