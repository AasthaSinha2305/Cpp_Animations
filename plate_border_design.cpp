#include <simplecpp>

main_program{
turtleSim();
int n;
// moves the turtle to the required position
penUp();
left(270);
forward(100);
left(90);
penDown();

//design
forward(40);
repeat(7){
right(360/10);
forward(5);
}
forward(40);
repeat(8){
left(360/10);
forward(5);
}
forward(40);
repeat(7){
right(360/10);
forward(5);
}
forward(40);
repeat(8){
left(360/10);
forward(5);
}
repeat(10){
forward(40);
repeat(7){
right(360/10);
forward(5);
}
forward(40);
repeat(8){
left(360/10);
forward(5);
}
}

wait(5);
}

