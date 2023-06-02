#include <stdio.h>

void changeRegister(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'A' + str[i] - 'a';
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'a' + str[i] - 'A';
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("введите строку ");
    fgets(str, sizeof(str), stdin);

    changeRegister(str);

    printf("измененная строка %s", str);

    return 0;
}