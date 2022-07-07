#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string[] = "Hello";
    size_t size = strlen(string);
    
    for(int i = 0; i < size / 2; i++) {
       char tmp = string[i]; 
       string[i] = string[size - i - 1];
       string[size - i - 1] = tmp;
    }
    printf("%s", string);
}
