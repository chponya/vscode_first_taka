#include "func.hpp"

int main()             
{         
    int n;  
    int mas[100][100];
    sb::ReadMatrix(mas, n);
    // int mas_prods_in_i[100];
    if (sb::MoreThanOneMin(mas, n) & sb::MoreThanOnePrime(mas, n)) {
        sb::Lines_Sort(mas, n);
    }
    sb::WriteMatrix(mas, n);

    return 0;           
}