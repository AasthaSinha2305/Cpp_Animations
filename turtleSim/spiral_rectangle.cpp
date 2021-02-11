#include <simplecpp>

main_program{
turtleSim();
int x = 10;
repeat(50){
repeat(2){
forward(x);
right(90);
wait(0.07);
}

x+=10;
}
wait(5);
}
