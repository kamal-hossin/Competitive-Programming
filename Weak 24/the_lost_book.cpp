#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int linearSearch(int book[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (book[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, target;
    scanf("%d", &n);

    int book[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &book[i]);
    }

    scanf("%d", &target);

    int index = linearSearch(book, n, target);
    
    printf("%d\n", index);

    return 0;
}

