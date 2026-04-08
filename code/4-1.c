#include <stdio.h>
#include <stdlib.h>

void echo() {
    char buf[5];
    scanf("%4s\n", buf);
    printf("%s\n", buf);
}

int main() {
    int x = 42;
    echo();
    return 0;
}
