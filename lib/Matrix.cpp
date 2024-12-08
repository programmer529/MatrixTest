#include "Matrix.h"

namespace match
{
	std::ostream& operator << (std::ostream& output, const Matrix& matrixP)
	{
		for (int i = 0; i < matrixP.col; i++)
		{
			for (int j = 0; j < matrixP.row; j++)
			{
				output << matrixP(i, j) << ' ';
			}
			output << std::endl;
		}

		return output;
	}

	Matrix &operator+(Matrix &matrix1, Matrix &matrix2)
	{
		if (matrix2.col != matrix1.col && matrix2.row != matrix1.row)
		{
			std::cerr << "Eror";
			return matrix1;
		}
		else
		{
			for (int i = 0; i < matrix1.row * matrix1.col; i++)
			{
				matrix1.matrix[i] += matrix2.matrix[i];
			}
		}
		return matrix1;
	}

	Matrix &operator-(Matrix &matrix1, Matrix &matrix2)
	{
		if (matrix2.col != matrix1.col && matrix2.row != matrix1.row)
		{
			std::cerr << "Eror";
			return matrix1;
		}
		else
		{
			for (int i = 0; i < matrix1.row * matrix1.col; i++)
			{
				matrix1.matrix[i] -= matrix2.matrix[i];
			}
		}
		return matrix1;
	}

	Matrix &operator*(Matrix &matrix1, Matrix &matrix2)
	{
		if (matrix2.col != matrix1.col && matrix2.row != matrix1.row)
		{
			std::cerr << "Eror";
			return matrix1;
		}
		else
		{
			for (int i = 0; i < matrix1.row * matrix1.col; i++)
			{
				matrix1.matrix[i] *= matrix2.matrix[i];
			}
		}
		return matrix1;
	}

	void Matrix::print()
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				std::cout << matrix[i] << ' ';
			}
			std::cout << std::endl;
		}
	}
} 

