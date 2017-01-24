#import <stdio.h>
#import <time.h>
#import <math.h>

int reverse(int n);
int isPalindrome(int n);

int main () {
  clock_t begin = clock();
  int productOf;
  int largestPalindrome = 0;

  int a = 10;
  while (a <= 99) {
    int b = 10;
    while (b <= 99) {
      if (isPalindrome(a*b) && a*b > largestPalindrome) {
        largestPalindrome = a*b;
      }
      b = b+1;
    }
    a = a+1;
  }

  printf("Problem 4.3 = %d\n", largestPalindrome);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}

int reverse(int n) {
  int reversed = 0;
  while (n > 0) {
    reversed = (10 * reversed) + (n % 10);
    n = n/10;
  }
  return reversed;
}

int isPalindrome(int n) {
  return n == reverse(n);
}
