#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int x = 0; x * 3 <= t; x++) {
        int target = t - (x * 3);
        
        if (target % 4 == 0) {
            printf("YES\n");
            return 0;
        }
    }
    
    
    printf("NO\n");
    return 0;
}
