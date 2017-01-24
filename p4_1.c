#import <stdio.h>
#import <time.h>

int getNumberOfDigits(int n);

int main () {
  clock_t begin = clock();
  int a;
  int b;
  int sum;
  int greatestSum;

  for (a = 0; a < 1000; a = a + 1) {
    for (b = 0; b < 1000; b = b + 1) {
      sum = a * b;
      if (sum > 100000) {
        // sum = 123456
        // 1 == 6
        if ((sum/100000)%10 == (sum/1)%10) {
          // 2 == 5
          if ((sum/10000)%10 == (sum/10)%10) {
            // 3 == 4
            if ((sum/1000)%10 == (sum/100)%10) {
              if (sum > greatestSum) {
                greatestSum = sum;
                printf("greatestSum: %d\n", greatestSum);
              }
            }
          }
        }
      }
    }
  }

  printf("Problem 4.1 = %d\n", greatestSum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}

int getNumberOfDigits(int n)
{
    int counter = 0;
    for (; n <= 0; n *= 10)
        counter++;
    return counter;
}
