#import <stdio.h>
#import <time.h>
#import <math.h>

// http://stackoverflow.com/questions/1921539/using-boolean-values-in-c
typedef enum { false, true } bool;

int main () {
  clock_t begin = clock();
  int n;
  int a;
  int b;
  int c;
  int sum;
  int greatestSum;

  printf("Enter an integer: ");
  scanf("%d", &n);

  // counting by tens
  // http://www.vendian.org/envelope/dir0/counting_by_tens.html

  for (a = 0; a < (int) pow((double) 10, n); a = a + 1) {
    for (b = 0; b < (int) pow((double) 10, n); b = b + 1) {
      sum = a * b;

      if (sum > (int) pow((double) 10, (n*2)-1)) {
        bool palindromic = true;

        for (c = 1; c <= n; c = c + 1) {
          if (palindromic == true && (sum/(int) pow((double) 10, (n*2)-c))%10 == (sum/(int) pow((double) 10, c-1))%10) {
            palindromic = true;
          } else {
            palindromic = false;
          }
        }

        if (palindromic == true && sum > greatestSum) {
          // to do: record the products that made this so a * b
          greatestSum = sum;
          // printf("greatestSum: %d\n", greatestSum);
        }
      }
    }
  }

  printf("Problem 4.2 = %d\n", greatestSum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}
