#include <iostream>
#include <string>

int main()
{  //exercise 1
  int x;
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

//exercise 2
bool isSunny = true;
bool hasUmbrella = false;

std::cout << "isSunny && hasUmbrella = " << (isSunny && hasUmbrella) << "\n";
std::cout << "isSunny || hasUmbrella = " << (isSunny || hasUmbrella) << "\n";
std::cout << "!isSunny = " << (!isSunny) << "\n";
std::cout << "!isSunny && !hasUmbrella = " << (!isSunny && !hasUmbrella) << "\n" << "\n";

//exercise 3
int n = 7;
double m = 4.0;
bool hasLicense = false;
bool greater = n>m;
bool equal = n==m;
bool license = (hasLicense == true) && (m<=n);
bool check_n = n>5;
bool check_license = (hasLicense = false);

std::cout << greater << "," << equal << "," << license << "\n";
std::cout << (check_n && check_license) << "\n";
  return 0;
}
