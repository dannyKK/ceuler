#include <stdio.h>
#include "../common/my_math.h"
#define MAX_FIB 4000000
int main(void){
  unsigned int fib;
  unsigned int sum = 2;
  while ((fib = get_next_fib()) <= MAX_FIB){
    if (is_even(fib)){
      sum += fib;
    }
  }
  fprintf(stderr, "Sum: %d\n", sum);
}


