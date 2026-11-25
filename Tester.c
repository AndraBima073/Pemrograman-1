#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    size_t max_len = 20;
    
    size_t len = strnlen(str, max_len);

    printf("String: %s\n", str);
    printf("Length: %zu\n", len);

    return 0;
}
