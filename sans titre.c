#include <uvsqgraphics.h>
int main () {
POINT P1 ;
POINT P2 ;
init_graphics(900,600);
P1.x = 100 ; P1.y = 50 ;
P2.x = P1.x + 75 ; P2.y = P1.y + 75;
draw_rectangle ( P1 , P2 , gold );
wait_escape ();
exit(0);
}
