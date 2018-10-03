
#include <uvsqgraphics.h>
int main () {
POINT P1 ;
POINT P2 ;
POINT P3 ;
POINT P4; 
init_graphics ( 600,600);
P1.x=200 ; P1.y = 0 ;
P2.x=200 ; P2.y = 600 ;
P3.x =400 ; P3.y = 0 ;
P4.x = 400 ; P4.y=600 ;
draw_line ( P1 , P2 , blue);
draw_line ( P3 , P4 , blue );
int R = 50 ;
POINT C;
C = wait_clic ();
if(C.x<200){
	draw_circle ( C , R , bleu );}
if( 200<C.x && C.x<400) {
draw_circle ( C ,R , blanc);}
if ( 400<C.x && C.x<600){
draw_circle ( C, R , rouge);}
else; 
wait_escape();
exit(0);
}
