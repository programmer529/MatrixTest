#pragma once

#include <iostream>
#include <vector>

namespace match
{
	class Matrix
	{
	private:
		std::vector <int> matrix;
		int col, row;

		int index(int colP, int rowP) const //функция для индексации матрици
		{
			return colP * col + rowP;
		}

	public:
		Matrix(int colP, int rowP) : col{colP}, row{rowP}
		{
			matrix.resize(colP * rowP);
			for (int i = 0; i < colP * rowP; i++) //заполнение матрици слчайными числами
			{
				matrix[i] = rand() % 10 + 1;
			}
		}
		Matrix() : Matrix{ 0, 0 }{}

		int GetCol() const {return col; }
		int GetRow() const {return row; }

		int& operator ()(int colP, int rowP) 
		{
			return matrix[index(colP, rowP)];
		}
		int operator ()(int colP, int rowP) const
		{
			return matrix[index(colP, rowP)];
		}

		void print();

		friend std::ostream& operator << (std::ostream& output, const Matrix& matrixP);

		friend Matrix &operator+(Matrix &matrix1, Matrix &matrix2);
		friend Matrix &operator-(Matrix &matrix1, Matrix &matrix2);
		friend Matrix &operator*(Matrix &matrix1, Matrix &matrix2);
	};
}
