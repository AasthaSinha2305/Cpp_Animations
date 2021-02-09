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
int y =0;
repeat(30){
forward(30);

left(360/30);
y++;
if(y==1 || y==6 || y==11|| y==16 || y==21 || y==26){
repeat(30){
forward(30);
right(360/30);
}
}
}
wait(5);

}
