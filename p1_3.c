#import <stdio.h>
#import <time.h>

int target = 9;
int SumDivisibleBy(int n);

int main () {
  clock_t begin = clock();
  int sum = 0;

  sum = SumDivisibleBy(3)+SumDivisibleBy(5)-SumDivisibleBy(15);
  printf("Problem 1.3 = %d\n", sum);

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Elapsed: %f seconds\n", time_spent);
  return 0;
}

int SumDivisibleBy(int n) {
  int p = target / n;
  return n*(p*(p+1)) / 2;
  // http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/runsums/triNbProof.html
}
