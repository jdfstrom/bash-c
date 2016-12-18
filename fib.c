#ifndef MAIN
#define MAIN

#include <stdlib.h>
#include <stdio.h>
#define then return
#define fi ;
#define do 1 &&
#define done ;
#define main int main
#define fib fib()
#define otherFib otherFib()
#define atio atio(var)
#define function int
#define local int
#define printf printf(
#define atoi atoi(var)
#define $minus1 minus1
#define $minus2 minus2
#define $value value
#define $ret ret
#define $response ,response
#define exit ); exit(0);/*
int() { :; }
char() { :; }
var() { :; }
var2() { :; }
value=$1
value() { :; }
int() { :; }
atoi() { :; }
#*/

int value;
int ret;
int fib;
int i;

function otherFib {
    ((value-=1));
    fib;
    local minus1=$ret;
    ((value-=1));
    fib;
    local minus2=$ret;
    ((value+=2));
	while (($minus2 > 0))
		do
		((minus1+=1)) && ((minus2-=1));
	done
	ret=$minus1;
	return 0;
}

function fib {
    if (($value < 2))
		then
		ret=$value;
	else
		otherFib
    fi
	return 0;
}

main() {

    char *var;
	char **var2;
	var2 = &var + 8;
    var = *var2;
	value = atoi;
	fib;
	local response=$ret;
	printf "%d\n" $response
	exit
}

#endif /*MAIN
main
#*/
