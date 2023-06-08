#include <stdio.h>
#include <stdlib.h>

void print_head(char *filename, int num_lines) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    char line[256];
    int count = 0;
    while (count < num_lines && fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        count++;
    }

    fclose(file);
}

int main() {
    char filename[256];
    int num_lines;

    printf("출력할 파일명을 입력하세요: ");
    scanf("%s", filename);

    printf("출력할 줄 수를 입력하세요: ");
    scanf("%d", &num_lines);

    print_head(filename, num_lines);

    return 0;
}

