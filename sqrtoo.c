#include <stdio.h>

float sqrtoo() {
    int nmbr = 42;
    float temp1 = 0.0f;
    float temp2 = 0.0f;
    int tries = 1;
    float result = -1.0f;

    printf("Start\n");

    for (int i = 0; i < 100000; i++) {
        if (temp1 * temp1 > nmbr) {
            temp2 = temp1;
            temp1 -= 1.0f / tries;
            result = temp2;
            tries *= 10; // refine step size
        } 
        else if (temp1 * temp1 == nmbr) {
            result = temp1;
            printf("Found exact square root\n");
            return result;
        } 
        else {
            temp1 += 1.0f / tries;
        }
    }

    return result;
}

int main() {
    printf("sqrt(42) ≈ %f\n", sqrtoo());
    return 0;
}

int side() {
  printf("Hehehehe hellööööö");
  return 0;
}
