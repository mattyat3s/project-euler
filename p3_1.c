#import <stdio.h>
#import <time.h>
#import <math.h>

// http://stackoverflow.com/questions/1921539/using-boolean-values-in-c
typedef enum { false, true } bool;

int main () {
  clock_t begin = clock();
  int i;
  int j;
  int sum = 0;
  long limit = 105; // 600851475143; //13195

  for (i = 1; i < sqrt(limit); i = i + 1) {
    bool prime = true;
    for (j = 2; j < i; j = j + 1) {
      if (i%j == 0) {
        prime = false;
      }
    }
    if (prime == true) {
      // printf("prime = %d\n", i);
      if (limit%i == 0) {
        printf("prime factor of %ld = %d\n", limit, i);
      }
    }
  }

  printf("Problem 3.1 = %d\n", sum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}
