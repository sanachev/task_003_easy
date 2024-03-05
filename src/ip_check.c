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

    /* библиотечная функция inet_pton
       преобразует строку в бинарный ip
       при успехе возвращает 1 */

    check = inet_pton(AF_INET, address, &addr);

    output(check);

    return 0;
}

void input(char *address) { scanf("%s", address); }

void output(int check) {
    if (check == 1) {
        printf("VALID");
    } else {
        printf("INVALID");
    }
}

// for new workflow