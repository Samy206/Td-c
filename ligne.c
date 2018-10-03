#include <uvsqgraphics.h>
int main() {

POINT P1 ; 
POINT P2 ;
init_graphics(900,600);

P1.x= 100 ; P1.y=200 ;
P2.x= 300 ; P2.y= 200 ;
draw_line(P1,P2,blue);
wait_escape();
exit(0);
}
