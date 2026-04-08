#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("%d\n", x);

    int *const ptr = &x;  // ptr은 x를 가리키는 포인터, ptr을 통해 x의 값을 변경할 수 없음
    *ptr = y;  // 포인터를 통해 x의 값 변경
    printf("%d\n", x);  // x == 20
    return 0;
}
