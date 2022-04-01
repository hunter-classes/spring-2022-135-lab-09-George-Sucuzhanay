#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D a = {10, 20, 30};

  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

  
  std::cout << length(&pointP) << std::endl;

  Coord3D posA = {0, 0, 100.0};
  Coord3D velA = {1, -5, 0.2};

}
