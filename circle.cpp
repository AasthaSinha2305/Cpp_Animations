
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

//circle
repeat(30){
forward(30);

left(360/30);
}
wait(5);

}
