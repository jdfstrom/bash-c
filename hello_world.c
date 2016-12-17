#include <stdio.h>
#define function int
#define echo printf(
#define return );printf("\n");

#ifndef MAIN
#define MAIN
function main() {
    echo "Hello, World!"
    return
}
#endif/*
main
#*/
