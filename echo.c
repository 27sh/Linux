#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("문자열을 입력하세요.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}

