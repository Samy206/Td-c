#include <uvsqgraphics.h>
int main () {
	int a = 10;
	int b = 5;
int c= 3 ; 
int d = a-b-c ; int e = (a-b)-c ; int f= a-(b-c);
	init_graphics(700,700);
	write_int(d) ; write_ln();
	write_int(e);write_ln();
	write_int(f);write_ln();
	wait_escape();
	exit(0);
}
