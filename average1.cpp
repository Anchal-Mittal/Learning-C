#include <stdio.h>
//********************************************APPROACH 1***************************************************

long avr_approach1(int num1,int num2,int num3){

  return  ((num1+num2+num3)/3) ;
}
//*******************************************APPROACH 2***************************************************  

long avr_approach2(int num1,int num2,int num3){
  return((num1/3)+(num2/3)+(num3/3)+((num1%3)+(num2%3)+(num3%3))/3);
}

//**********************************************MAIN FUNCTION *********************************************

int main(){
 int num1,num2,num3;
 printf("%s \n","ENTER THE NUMBERS");
 scanf("%d %d %d", &num1,&num2,&num3);
 long result1=avr_approach1(num1,num2,num3);
 long result2=avr_approach2(num1,num2,num3);
 printf("%s,%ld \n","THE RESULT OF FIRST APPROACH",result1);
 printf("%s,%ld \n","THE RESULT OF SECOND APPROACH",result2);
  }
