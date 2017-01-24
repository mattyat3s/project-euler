#import <stdio.h>
#import <time.h>

int main () {
  clock_t begin = clock();
  int m;
  int sum = 0;

  for (m = 1; m < 1000000000; m = m + 1) {
    if (m%3 == 0 || m%5 == 0) {
      sum += m;
    }
  }

  printf("Problem 1.2 = %d\n", sum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}
