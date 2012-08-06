#include "my_math.h"

int is_even(unsigned int n){
  if (n % 2 == 0)
    return true;
  return false;
}

unsigned int get_next_fib(){
  static unsigned int prev = 1;
  static unsigned int current = 2;
  unsigned int next = prev + current;
  prev = current;
  current = next;
  return current;
}
