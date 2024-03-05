#include "ip_check.h"

#include <arpa/inet.h>
#include <stdio.h>

#define LENGTH 16

/* Практика приводит к совершенству.
Хороший код говорит сам за себя. */

int main() {
    char address[LENGTH];
    struct in_addr addr;  // вспомогательная структура из библиотеки
    int check;

    input(address);

    /* библиотечная функция inet_aton
       преобразует строку в числовой ip
       возвр. статус преобр-ния 0 или 1 */

    check = inet_aton(address, &addr);

    output(check);

    return 0;
}

void input(char *address) { scanf("%s", address); }

void output(int check) {
    if (check != 0) {
        printf("VALID");
    } else {
        printf("INVALID");
    }
}