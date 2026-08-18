#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int balls[n];
    int freq[10001] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &balls[i]);
        freq[balls[i]]++;  
    }

    int sum = 0;
    int last_taken = -1; 

    for (int i = 10000; i >= 1; i--) {
        if (freq[i] > 0) {
            if (i != last_taken) {  
                sum += i;
                last_taken = i; 
            } else {  
                if (i - 1 > 0) { 
                    sum += i - 1;
                    last_taken = i - 1;  
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
}

