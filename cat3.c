#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int c;
    int line_number = 1;
    int print_line_number = 0;
    int print_nonprintable = 0;

    if (argc < 2)
        fp = stdin;
    else
    {
        if (strcmp(argv[1], "-A") == 0)
        {
            print_nonprintable = 1;
            if (argc < 3)
                fp = stdin;
            else
                fp = fopen(argv[2], "r");
        }
        else if (strcmp(argv[1], "-n") == 0)
        {
            print_line_number = 1;
            if (argc < 3)
                fp = stdin;
            else
                fp = fopen(argv[2], "r");
        }
        else
            fp = fopen(argv[1], "r");
    }

    if (print_line_number)
        printf("%d: ", line_number++);

    c = getc(fp);
    while (c != EOF)
    {
        if (print_nonprintable)
        {
            if (c < ' ' || c == 127)
            {
                switch (c)
                {
                case '\t':
                    putchar('^');
                    putchar('I');
                    break;
                case '\n':
                    putchar('$');
                    putchar('\n');
                    break;
                case '\v':
                    putchar('^');
                    putchar('K');
                    break;
                case '\f':
                    putchar('^');
                    putchar('L');
                    break;
                case '\r':
                    putchar('^');
                    putchar('M');
                    break;
                default:
                    putchar('^');
                    putchar('?');
                    break;
                }
            }
            else
                putchar(c);
        }
        else
        {
            putchar(c);
            if (c == '\n')
            {
                if (print_line_number)
                    printf("%d: ", line_number++);
            }
        }

        c = getc(fp);
    }

    fclose(fp);
    return 0;
}

