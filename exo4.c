#include <uvsqgraphics.h>
int main () { 
	POINT C;
	C = wait_clic();
	int R = 50;
	init_graphics(800,800);
	draw_circle( C, R,vert );
	wait_escape();
	exit(0);
}

