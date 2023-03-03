#ifndef MATRIX_H
#define MATRIX_H

#include <bits/stdc++.h>
#include <vector>

class Matrix
{
private:
  const int _N; // Square matrix --> NxN
  std::vector<std::vector<double>> _arr;

public:
  // Default Constructor
  Matrix(int);

  // Build matrix
  void input(std::vector<std::vector<double>> &a);

  // Overload Multiplication Operator
  std::vector<std::vector<double>> operator*(Matrix &);

  // Default Destructor
  ~Matrix();
};

#endif // MATRIX_H