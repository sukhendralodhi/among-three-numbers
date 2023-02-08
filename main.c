#include <stdio.h>

int main(void) {
  int number1, number2, number3;
  printf("Enter the number: ");
  scanf("%d%d%d", &number1, &number2, &number3);

  // if (number1 > number2 && number1 > number3) {
  //   printf("Number 1 Big\n");
  // }
  // if (number2 > number1 && number2 > number3) {
  //   printf("Number 2 Big\n");
  // }
  // if (number3 > number1 && number3 > number2) {
  //   printf("Number3 is big\n");
  // }

  if(number1 > number2 && number1 > number3) {
    printf("Number1 is Big");
  } else if (number2 > number1 && number2 > number3) {
    printf("Number2 is big");
  } else {
    printf("Number3 is big");
  }

  return 0;
}