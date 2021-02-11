#include <simplecpp>

main_program{
initCanvas("rects",500,500);
	double x=20;
	double y=20;
	repeat(20){
		Rectangle r( 250, 250 , x, y);
		r.imprint();
		x = x +10;
		y = y + 10;
	}
	wait(2);
}
