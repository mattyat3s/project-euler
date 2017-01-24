#import <stdio.h>
#import <time.h>

int main () {
  clock_t begin = clock();
  int m;
  int sum = 0;
  int fib = 1;
  int lastFib = 0;

  while(fib < 4000000) {
    int temp = fib;
    fib += lastFib;
    if (fib%2 == 0) {
      sum += fib;
    }
    lastFib = temp;
  }

  printf("Problem 2.1 = %d\n", sum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}
