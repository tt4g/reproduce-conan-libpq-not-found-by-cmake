#include <iostream>

#include "libpq-fe.h"

int main(int, char**) {
    const int version = PQlibVersion();

    std::cout << "libpq version: " << version << std::endl;

    return 0;
}
