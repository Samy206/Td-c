#include <uvsqgraphics.h>
int main (){
POINT P1;
POINT P2;
POINT P3;
POINT P4;
init_graphics (600,900);
int X=200 ; int R = 90 ; int Y = 210;
P1.x = ( X-R/2) ; P1.y = (Y+R/2);
P2.x = ( X+R/2) ; P2.y = (Y+R/2);
P3.x = ( X + R/2 ) ; P3.y = ( Y-R/2);
P4.x = ( X-R/2) ; P4.y = ( Y-R/2);
draw_line( P1 , P3 , vert );
draw_line ( P2 , P4 , blue );
wait_escape();
exit(0);
}
