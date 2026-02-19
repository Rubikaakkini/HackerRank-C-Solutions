#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);

    int count[10] = {0};   // Array to store frequency of digits

    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';  // Convert char to integer
            count[digit]++;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}
