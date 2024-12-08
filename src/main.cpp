#include <iostream>

#include <lib/export.h>

struct Matrix;

#ifdef __cplusplus
extern "C"
{
#endif
    extern Matrix* MATRIXLIB_EXPORT createMatrix(int row, int col);
    extern void MATRIXLIB_EXPORT deleteMatrix(Matrix* matrix);
    extern void MATRIXLIB_EXPORT print(const Matrix* M);
    
#ifdef __cplusplus
}
#endif

int main()
{
    Matrix* matrix1 = createMatrix(10, 10);
    Matrix* matrix2 = createMatrix(10, 10);

    print(matrix1); std::cout << "\n\n";
    
    print(matrix2);

    deleteMatrix(matrix1);
    deleteMatrix(matrix2);
    return 0;
}