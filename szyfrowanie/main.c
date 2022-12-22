#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Nie podano nazwy pliku do zaszyfrowania\n");
        return 1;
    }
    FILE *file1;
    if (NULL == (file1 = fopen(argv[1], "rb"))) return 1;
    char *temp_file_name = tmpnam(NULL);

    FILE *file2;
    if (NULL == (file2 = fopen(temp_file_name, "wb"))) return 1;

    printf("Podaj hasło: ");
    char password[100];
    scanf("%s", password);
    int password_length = strlen(password);

    int j = 0;
    int c;
    while ((c = getc(file1)) != EOF) {
        c ^= password[j % password_length];
        putc(c, file2);
        j++;
    }

    fclose(file1);
    fclose(file2);

    unlink(argv[1]);
    rename(temp_file_name, argv[1]);

    return 0;
}