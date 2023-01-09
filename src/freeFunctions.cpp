#include "../include/freeFunctions.h"


void initMatrix(int**& array, std::size_t x)
{
    array = new int* [x];

    for (int i = 0; i < x; i++)
    {
        array[i] = new int[x];
        for (int j = 0; j < x; j++)
        {
            array[i][j] = 0;
        }
    }
}

void freeMatrix(int**& matrix, std::size_t n)
{
    if( matrix != NULL )
    {
        for (int i = 0; i < n + 1; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}


void printMatrix(int**& Matrix, const std::size_t& n, const std::size_t& m)
{
    if( Matrix != NULL )
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << std::setw(5) << Matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}

void runApp()
{   
    int sizeNxN;

    std::cout << "Pleace insert the number of rows and columns of the matrix: ";
    std::cin >> sizeNxN;
    

    int** spiral = createSnailShell(sizeNxN);

    int rows = sizeNxN,
    columns = sizeNxN;

    printMatrix(spiral, rows, columns);

    freeMatrix(spiral, sizeNxN);
    
    spiral = NULL;
}