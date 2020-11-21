#include<iostream>
using namespace std;
class transepose_matrix{
   int a[10][10], transpose[10][10], row, column, i, j;
	public:
		void accept();
		void display();
};
void transepose_matrix::accept()
{
	cout << "Enter rows and columns of matrix: ";
    cin >> row >> column;
    cout << "\nEnter elements of matrix: " << endl;
    for (int i = 0; i < row; ++i) 
	{
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
    }

}
void transepose_matrix::display()
{
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i)
	{
      for (int j = 0; j < column; ++j) 
	  {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
    }
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j)
	  {
         transpose[j][i] = a[i][j];
      }
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j)
	  {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
}
int main()
{
	transepose_matrix matrix;
	matrix.accept();
	matrix.display();
}
