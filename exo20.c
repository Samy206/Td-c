#include <uvsqgraphics.h>
int main () {
init_graphics(600,600);
POINT C ;
C= wait_clic();
int M = 125 ;
if (C.x % 2 == 0 && C.y %2 == 0 ){
	draw_circle ( C , M , rouge );}
else if ( C.x % 2 > 0 && C.y%2==0){
	draw_circle ( C , M , bleu );}
else if ( C.x %2 == 0 && C.y % 2 > 0){
 	draw_circle ( C , M , jaune);}
else { draw_circle ( C , M , vert );}
wait_escape();
exit(0);
}


