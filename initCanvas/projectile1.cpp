#include <simplecpp>


//parabolic trajectary (projectile)

main_program{
initCanvas("projectile",600,600);
int start = getClick();
Circle p(start/65536,start%65536,5);
p.setColor(COLOR("red"));
//p.setFill(true);

p.penDown();
double vx = 1,vy = -1, gravity = 0.01;
int i = 0;
repeat(500){
p.move(vx,vy);
i++;
vy+=gravity;
if(i%20==0){
p.imprint();
}
wait(0.01);
}
getClick();
}
