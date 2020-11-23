#include <stdio.h>
#include <stdlib.h>

#include "Rectangle.h""
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Rectangle_t rect;
	
	rect.a = 3;
	rect.b = 4;
	
	printf("1.Area = %ld\n",Rectangle_Area(&rect));
	printf("kp-f1");
	return 0;
}
