#include <stdio.h>
#include <stdbool.h>

int main() {
    char S[1000001];  
    scanf("%s",&S);
    
    bool pre[26] = {false}; 
    
    for (int i = 0;S[i] !='\0'; i++) {
        pre[S[i] - 'a'] = true;
    }
    
    for (int i = 0; i < 26; i++) {
        if (pre[i]) {
            printf("%c",i +'a');  
        }
    }
    
    return 0;
}
