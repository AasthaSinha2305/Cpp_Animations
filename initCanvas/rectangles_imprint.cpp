#include <simplecpp>

void Rev360(Rectangle &r){
repeat(36){
r.right(10);
r.imprint();
wait(0.01);
}
}

main_program{
initCanvas();
Rectangle r(200,200,200,20);
Rev360(r);
getClick();
}
