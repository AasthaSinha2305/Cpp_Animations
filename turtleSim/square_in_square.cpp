#include <simplecpp>

main_program{
turtleSim();
repeat(4){
forward(200);
left(90);
wait(1);
}
penUp();
forward(100);
penDown();
left(45);
repeat(4){
forward(100*sqrt(2));
left(90);
wait(1);
}

wait(5);

}
