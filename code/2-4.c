#include <stdio.h>

// 문자열을 입력받아 숫자부분을 정수로 추출, 남은 문자열의 시작 주소를 알아냄.
long my_strol(char *str, char **endptr) {
    long res = 0;

    while (*str >= '0' && *str <= '9') {
        res = res * 10 + (*str - '0');
        str++;
    }

    if (endptr != NULL) {
        *endptr = str;
    }

    return res;
}

int main() {
    char str[] = "2026hello";
    char *end;      // 숫자가 끝나는 지점, 'h'의 주소를 저장할 포인터

    long val = my_strol(str, &end);

    printf("%ld %s\n", val, end);
    return 0;
}
