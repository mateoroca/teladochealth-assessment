#ifndef FREEFUNCIONS_H
#define FREEFUNCIONS_H
#include <iostream>
#include <iomanip>

void initMatrix(int**& array, std::size_t x);

void freeMatrix(int**& matrix, std::size_t n);

void printMatrix(int**& Matrix, const std::size_t& n, const std::size_t& m);

template <typename type>
int** createSnailShell(const type& x)
{
    int** array = NULL;

    int n = x;

    int Col;
    int count = 1;
    int aux = n - 1;

    if( n > 1 && typeid(int) == typeid(x) )
    {
        initMatrix(array, x + 1);
        for (int idx = 1; idx < n; idx++)
        {
            for (Col = idx - 1; Col < aux; Col++)
            {
                array[n - (aux + 1)][Col] = count;
                count++;
            }
            for (Col = idx - 1; Col < aux; Col++)
            {
                array[Col][aux] = count;
                count++;
            }
            for (Col = aux; Col >= (idx - 1); Col--)
            {
                array[aux][Col] = count;
                count++;
            }
            aux--;
            for (Col = aux; Col >= idx; Col--)
            {
                array[Col][n - (aux + 2)] = count;
                count++;
            }
        }
    } 
    return array;
}


void runApp();

#endif