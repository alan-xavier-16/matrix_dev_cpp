#include <iostream>
#include "Matrix.h"

// Default Constructor
Matrix::Matrix(int N) : _N(N), _arr(N, std::vector<double>(N, 0))
{
  std::cout << "Building blank matrix of size: " << N << "x" << N << std::endl;
}

// Build matrix
void Matrix::input(std::vector<std::vector<double>> &a)
{
  for (int i = 0; i < _N; i++)
  {
    for (int j = 0; j < _N; j++)
    {
      _arr[i][j] = a[i][j];
    }
  }
}

// Overload Multiplication Operator
std::vector<std::vector<double>> Matrix::operator*(Matrix &other)
{
  // Store result of matrix multiplication
  std::vector<std::vector<double>> res(_N, std::vector<double>(_N, 0));

  for (int i = 0; i < _N; i++)
  {
    for (int j = 0; j < _N; j++)
    {
      for (int k = 0; k < _N; k++)
      {
        res[i][j] += _arr[i][k] * (other._arr[k][j]);
      }
    }
  }

  return res;
}

// Default Destructor
Matrix::~Matrix() {}