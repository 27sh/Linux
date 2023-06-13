#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    const struct dirent **entry1 = (const struct dirent **)a;
    const struct dirent **entry2 = (const struct dirent **)b;
    return strcmp((*entry1)->d_name, (*entry2)->d_name);
}

int main(void)
{
    char *cwd = (char *)malloc(sizeof(char) * 1024);
    DIR *dir = NULL;
    struct dirent *entry = NULL;
    struct dirent **entries = NULL;
    int num_entries = 0;

    getcwd(cwd, 1024);

    if ((dir = opendir(cwd)) == NULL)
    {
        printf("current directory error\n");
        exit(1);
    }

    while ((entry = readdir(dir)) != NULL)
    {
        num_entries++;
    }

    rewinddir(dir);

    entries = (struct dirent **)malloc(sizeof(struct dirent *) * num_entries);
    int i = 0;
    while ((entry = readdir(dir)) != NULL)
    {
        entries[i++] = entry;
    }

    qsort(entries, num_entries, sizeof(struct dirent *), compare);

    for (int i = 0; i < num_entries; i++)
    {
        printf("%s ", entries[i]->d_name);
    }

    printf("\n");

    free(entries);
    free(cwd);
    closedir(dir);

    return 0;
}

