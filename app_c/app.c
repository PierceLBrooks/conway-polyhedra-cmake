/*
 * Sample application that uses a common lib to generate a UUID
 * and uses the CMakeRust library's colorlog featuer toe log the UUID.
 *
 * Copyright 2020 (C) Micah Snyder
 */

#include <stdio.h>
#include <string.h>

#include "demo-rust.h"

int main(int argc, char** argv)
{
    const char* temp = "dtdtdtI";
    for (int i = 0; i < argc; i++)
    {
        printf("%i = %s\n", i, argv[i]);
    }
    parse_and_write(temp, strlen(temp));
    return 0;
}
