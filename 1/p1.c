/*
 * Sum of multiples of 3,5 below 1000
 */
#include <stdio.h>

int main(int argc, char *argv[]){
  int max;
  int i;
  int sum = 0;

  if (argc < 2){
    fprintf(stderr, "Usage %s num\n", argv[0]);
    return 0;
  }
  max = atoi(argv[1]);
  for(i=0; i<max; i++){
    if(i%3 == 0 || i%5 == 0){
      sum += i;
    }
  }
  printf("Sum to %d is: %d\n", max, sum);
  return 0;
}
