#include <stdio.h>
#include <stdlib.h>

void print_tail(char *filename, int num_lines) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);

    char *buffer = (char *)malloc(file_size * sizeof(char));
    if (buffer == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        fclose(file);
        return;
    }
    fseek(file, 0, SEEK_SET);
    fread(buffer, sizeof(char), file_size, file);

    int count = 0;
    for (long i = file_size - 1; i >= 0; i--) {
        if (buffer[i] == '\n') {
            count++;
            if (count >= num_lines) {
                break;
            }
        }
    }

    int line_count = 0;
    for (long i = file_size - 1; i >= 0; i--) {
        if (buffer[i] == '\n') {
            line_count++;
            if (line_count > count) {
                break;
            }
        }
        printf("%c", buffer[i]);
    }

    free(buffer);
    fclose(file);
}

int main() {
    char filename[256];
    int num_lines;

    printf("출력할 파일명을 입력하세요: ");
    scanf("%s", filename);

    printf("출력할 줄 수를 입력하세요: ");
    scanf("%d", &num_lines);

    print_tail(filename, num_lines);

    printf("\n");
    return 0;
}

