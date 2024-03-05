#include <stdio.h>
#include <arpa/inet.h>
#include "ip_check.h"


#define LENGTH 16

/* Практика приводит к совершенству.
Хороший код говорит сам за себя. */

int main() {
    char address[LENGTH];
    int check;
    input(address);
    check = inet_aton(const address, struct in_addr *addrptr);
    output(check);
    

    return 0;
}