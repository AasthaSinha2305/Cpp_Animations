#include <simplecpp>

main_program{
turtleSim();
int n;
cout << "Enter polygon sided: ";
cin >> n;
// moves the turtle to the required position
penUp();
left(180);
forward(100);
left(90);
forward(150);
left(90);
penDown();

repeat(n){
repeat(10){
forward(10);
penUp();
forward(10);
penDown();
}
wait(1);
left(360/n);
}
wait(5);

}
