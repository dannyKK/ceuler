/**
 * Problem 4
 * Largest Palondrome made of product of 3 digit numbers
 *
 * answer: 906609
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(int num){
  char digits[33];
  int i, len;
  sprintf(digits, "%d", num);
  len = strlen(digits);
  for (i = 0; i < len/2; i++)
    if (digits[i] != digits[len-i-1])
      return false;
  return true;
}

int main(void){
  int i,j;
  int max = 0;

  for (i = 100; i <1000; i++)
    for (j = 100; j <1000; j++)
      if (is_palindrome(i * j) && i * j > max)
        max = i * j;

  printf("Max palindrome: %d\n", max);
  return 0;
}
