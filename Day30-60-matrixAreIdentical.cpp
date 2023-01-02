#include <iostream>
using namespace std;
#define size 3

// Function to check matrix are indentical or not
bool isIdentical(int MatrixA[][size], int MatrixB[][size])
{
  for (int row = 0; row < size; row++)
  {
    for (int column  = 0; column < size; column++)
    {
      if (MatrixA[row][column] != MatrixB[row][column])
      {
        return false;
      }
    }
  }
  return true;
}
 
int main()
{
  // declare two matrix MatrixA and MatrixB
    int MatrixA[size][size] = { {1, 1, 1},
                                {2, 2, 2},
                                {3, 3, 3}};
    
    int MatrixB[size][size] = { {1, 1, 1},
                                {2, 2, 2},
                                {3, 3, 3}};                            

// call the function isIdentical to check matrix are indentical or not
    if (isIdentical(MatrixA, MatrixB))
    {
      cout << "****** Matrices are identical ******"<<endl;
    }
    else
    {
      cout << "****** Matrices are not identical *****"<<endl;
    }
    return 0;
}
