#include <stdio.h>

void read_only(int *arr, int size) {

    // arr[0] = 999;  // 컴파일 에러: 배열 요소에 값을 할당할 수 없음
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(arr + i));  // 배열 요소에 접근
    }
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    read_only(nums, 5);  // 배열과 크기를 전달
    return 0;
}
