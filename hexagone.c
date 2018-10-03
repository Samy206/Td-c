#include <uvsqgraphics.h>
int main () {
POINT C ;
POINT P1 ;
POINT P2 ;
POINT P3;
POINT P4;
POINT P5;
POINT P6;
init_graphics ( 900 , 600 ) ;
int R = 100;
int PI=100;
int A = 112;
int H = sin (PI/3)*R;
C=wait_clic();
P1.x = C.x + R/2; P1.y = C.y+H;
P2.x = C.x - R /2; P2.y = C.y + H;
P3.x = C.x - A; P3.y = C.y ;
P4.x = C.x - R/2; P4.y = C.y - H ;
P5.x = C.x + R/2 ; P5.y = C.y - H;
P6.x = C.x +A; P6.y = C.y ;
draw_line(P1, P2, blue);
draw_line (P2, P3 , blue );
draw_line(P3, P4, blue );
draw_line(P4 , P5 , blue );
draw_line(P5,P6, bleu);
draw_line(P6,P1,blue);
draw_circle(C, A,vert);
wait_escape();
exit(0);
}




