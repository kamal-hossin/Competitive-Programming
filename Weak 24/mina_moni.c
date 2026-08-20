#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int coins[N];
        int total_sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &coins[i]);
            total_sum += coins[i];
        }

        int min_diff = INT_MAX;  
        int subset_count = 1 << N;

        for (int mask = 0; mask < subset_count; mask++) {
            int sum1 = 0, sum2 = 0;

            for (int i = 0; i < N; i++) {
                if (mask & (1 << i)) { 
                    sum1 += coins[i];
                } else {  
                    sum2 += coins[i];
                }
            }

             
            int diff = abs(sum1 - sum2);
            if (diff < min_diff) {
                min_diff = diff; 
            }
        }

        
        printf("%d\n", min_diff);
    }

    return 0;
}
