#include <simplecpp>

void tree(int h, float H_b, float W_b,
   float rx, float ry) // coordinates of the root.
{
  if(h > 0){
    float LSRx = rx-W_b/4; // x coordinate of root of Left subtree.
    float RSRx = rx+W_b/4; // x coordinate of root of Right subtree.
    float SRy  = ry-H_b/h; // y coordinate of roots of subtrees.


    Line Lbranch(rx, ry, LSRx, SRy);
    wait(0.2);
    Lbranch.imprint();
    Line Rbranch(rx, ry, RSRx, SRy);
    wait(0.2);
    Rbranch.imprint();

    tree(h-1, H_b-H_b/h, W_b/2, LSRx, SRy); // Left Subtree.
    tree(h-1, H_b-H_b/h, W_b/2, RSRx, SRy); // Right Subtree.
  }
}

main_program{
  initCanvas("tree",600,600);
  tree(5,600,600,300,600);
  getClick();
}
