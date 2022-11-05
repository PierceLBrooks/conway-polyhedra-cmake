/*
 * Sample application that uses a common lib to generate a UUID
 * and uses the CMakeRust library's colorlog featuer toe log the UUID.
 *
 * Copyright 2020 (C) Micah Snyder
 */

#include <stdio.h>
#include <string.h>

#include "polyhedron-ops.h"

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++)
    {
        if (i == 0)
        {
            continue;
        }
        printf("%i = %s\n", i, argv[i]);
        parse_and_write(argv[i], strlen(argv[i]));
    }
    return 0;
}

