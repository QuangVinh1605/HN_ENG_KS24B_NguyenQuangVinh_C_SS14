#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    int word_count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (in_word == 0) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("so tu trong chuoi la: %d\n", word_count);

    return 0;
}

