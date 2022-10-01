#include <stdio.h>
int main(){
    char operator;
    printf("choose n opertor['+','-','*','/',]= ");
    scanf("%c",&operator);
double num1, num2;
printf("enter first number = ");
    scanf("%lf",&num1);
printf("enter second number= " );
    scanf("%lf",&num2);
double result;
switch(operator){
case '+':
    result= num1 + num2;
    printf("%lf",result);
    break;
case '-':
    result =num1-num2;
    printf("%lf",result);

    break;
case '*':
    result=num1*num2;
    printf("%lf",result);
    break;
case '/':
    result=num1/num2;
    printf("%lf",result);
    break;
}
    return 0;

}
