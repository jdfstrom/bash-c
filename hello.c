#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <inttypes.h>
#define function int
#define return );
#define argc int argc
#define $var ,var
#define printf printf( /*
char() { :; }
var=$1
var() { :; }
var2() { :; }
#*/

function main() {

    char *var;
	char **var2;
	var2 = &var + 7;
    var = *var2;
    printf "Hello, %s!\n" $var
    return
}

#endif /*MAIN
#echo "Hello, $1!"
main
#*/
