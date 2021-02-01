#include <simplecpp>

main_program{
turtleSim();
repeat(2){
	repeat(2){
		forward(100);
		left(60);
		forward(100);
		left(120);
		}
	right(120);
	penUp();
	forward(20);
	penDown();
	repeat(2){
		forward(100);
		left(120);
		forward(100);
		left(60);
	}
	right(60);
	penUp();
	forward(20);
	penDown();
}
wait(200);
}
