#include "c_api.h"
#include "lib/Matrix.h"

struct Matrix : public match::Matrix
{
public:
    Matrix(const struct match::Matrix &M) : match::Matrix(M) {}
};

Matrix* MATRIXLIB_EXPORT createMatrix(int row, int col)
{
    return new Matrix(match::Matrix(row, col));
}

void MATRIXLIB_EXPORT deleteMatrix(Matrix* matrix)
{
    delete matrix;
}

real MATRIXLIB_EXPORT mat_get(Matrix* m, int row, int col)
{
    return m->operator()(row, col);
}

void MATRIXLIB_EXPORT mat_set(Matrix* m, int row, int col, real value)
{
    m->operator()(row, col) = value;
}

Matrix* MATRIXLIB_EXPORT match_add(Matrix M1, Matrix M2)
{
    return new Matrix(M1 + M2);
}

Matrix* MATRIXLIB_EXPORT match_substract(Matrix M1, Matrix M2)
{
    return new Matrix(M1 - M2);
}

Matrix* MATRIXLIB_EXPORT match_dot(Matrix M1, Matrix M2)
{
    return new Matrix(M1 * M2);
}

void MATRIXLIB_EXPORT print(const Matrix* M)
{
    for (int i = 0; i < M->GetRow(); i++)
    {
        for (int j = 0; j < M->GetRow(); j++)
        {
            std::cout << M->operator()(i, j) << ' ';
        }
        std::cout << std::endl;
    }
}