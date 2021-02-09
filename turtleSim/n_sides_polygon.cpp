#include <simplecpp>

main_program{
turtleSim();
int n;
cout << "Enter the sides of polygon: ";
cin >> n;
repeat(n){
forward(100);
left(360/n);
wait(2);
}
wait(10);
}
