#import <stdio.h>
#import <time.h>
#import <math.h>

// http://stackoverflow.com/questions/1921539/using-boolean-values-in-c
typedef enum { false, true } bool;

int main () {
  clock_t begin = clock();
  // better algorithm
  // http://math.stackexchange.com/questions/389675/largest-prime-factor-of-600851475143
  long a = 600851475143;
  long b = 2;
  long c;

  while (b < (a / 2)) {
    if (a % b == 0) {
      c = a / b;
      a = c;
      b = 2;
      printf("largest current divisor: %ld\n", c);
    } else {
      b += 1;
    }
  }

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}
