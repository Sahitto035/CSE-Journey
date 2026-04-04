#include <stdio.h>

int main() {
    int x;
    // No semicolon here!
    for (x = 2; x < 100; x++) {
        int cnt = 0; // Reset for every new number x

        for (int i = 2; i < x; i++) {
            if (x % i == 0) { // Check against i, not 2
                cnt++;
            }
        }

        if (cnt == 0) {
            printf("%d ", x);
        }
    }


    return 0;
}
