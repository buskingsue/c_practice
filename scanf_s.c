#include <stdio.h>

int main(void) {
    int input; // 정수 변수를 선언합니다

    printf("정수를 입력하세요: ");
    if (scanf("%d", &input) == 1) {
        // 정수로 성공적으로 읽음
        // 이제 'input'에 사용자의 정수 입력이 저장됩니다
        printf("입력한 값: %d\n", input);
    } else {
        // 유효하지 않은 정수 입력
        printf("유효하지 않은 입력입니다. 정수를 입력하세요.\n");
    }

    return 0;
}
