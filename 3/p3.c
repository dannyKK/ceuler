/**
 * Problem 3
 * Largest prime factor of composite number
 *
 * answer: 6857
 */
#include "../common/my_math.h"
#include <stdio.h>

int main(void){
  ULONG f, max = 0;
  ULONG num = 600851475143ULL;

  while (num > 1){
    f = get_next_prime();
    while (num % f == 0){
      num /= f;
      if (f > max)
        max = f;
    }
  }
  printf("Max:%llu\n", max);
  return 0;
}
