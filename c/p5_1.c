#import <stdio.h>

int i, c = 1, limit = 20;

int main () {
  for (i = 1; i <= limit; i++) {
    if (c % i == 0) {
      if (i == limit) {
        printf("Hello %d\n", c);
        return 0;
      }
    } else {
      i = 1;
      c++;
    }
  }

  return 0;
}
