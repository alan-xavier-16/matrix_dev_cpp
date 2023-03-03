#include <iostream>
#include "Matrix.h"

int main()
{
  int N = 3;
  std::vector<std::vector<double>> m1 = {{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}};
  std::vector<std::vector<double>> m2 = {{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}};

  Matrix M1(N);
  Matrix M2(N);
  M1.input(m1);
  M2.input(m2);
  std::vector<std::vector<double>> result = M1 * M2;

  // Print result
  for (int i = 0; i < N; i++)
  {
    std::cout << "{ ";
    for (int j = 0; j < N; j++)
    {
      std::cout << result[i][j] << " ";
    }
    std::cout << "}" << std::endl;
  }
}