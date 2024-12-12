#include <iostream>
#include <string>

int main()
{ int x; //exercise 1
int y;
int z;
int add_xy;
int sub_yx;
int mult_xy;
int div_xy;
bool greater_than;
bool less_than;

x = 25;
y = 3;
z = 10;
add_xy = x+y;
sub_yx = y-x;
mult_xy = x*y;
div_xy = x/y;
greater_than = x>z;
less_than = y<x;

std::cout << add_xy << "," << sub_yx << "," << mult_xy << "," << div_xy << "," << greater_than << "," << less_than << "\n" << "\n";


  return 0;
}
