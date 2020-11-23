#ifndef RECT_HEADER
#define RECT_HEADER

#include <stdio.h>
#include <stdlib.h>


typedef struct Rectangle_s
{
	long a;
	long b;
}Rectangle_t;


long Rectangle_Area(const Rectangle_t * const rect);

#endif
