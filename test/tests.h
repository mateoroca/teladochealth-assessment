#ifndef TESTS_H
#define TESTS_H
#include <assert.h>
#include "../include/freeFuncions.h"

void testOneEqualMatrix()
{   
    int sizeNxN;

    int** matrix = createSnailShell(5);

    const int testMatrix[sizeNxN][sizeNxN] = {
         1,  2,  3,  4, 5,
        16, 17, 18, 19, 6,
        15, 24, 25, 20, 7,
        14, 23, 22, 21, 8,
        13, 12, 11, 10, 9,
    };
    

    for( int i = 0; i < sizeNxN; i++ ) {
        for( int j = 0; j < sizeNxN; j++ ) 
        {
            if( testMatrix[i][j] == matrix[i][j] )
            std::cout << "Test one passed" << std::endl;
                
             else assert(testMatrix[i][j] == matrix[i][j]);
                 freeMatrix(matrix, sizeNxN);
            
        }
    }

} 

void testTwoSameType()
{   
    
     int** SnailShell = createSnailShell(5);

    if( typeid(int**) == typeid(SnailShell) )
    std::cout << "test two passed" << std::endl;

    else 
     assert(typeid(int**) == typeid(SnailShell));
     freeMatrix(SnailShell,5);


}

#endif // !TESTS_H