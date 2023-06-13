#include <stdio.h>

void clear_console() {
    printf("\033[2J\033[H");
}

int main() {
    clear_console();
    printf("콘솔 화면이 지워졌습니다.\n");
    return 0;
}

