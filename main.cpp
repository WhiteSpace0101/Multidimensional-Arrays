#include <iostream>
#include <algorithm>

int main(){
    //Multidimensional array mapping: arr1[row][column]
    const size_t rows = 3;
    const size_t cols = 4;
    double carrots [rows][cols] = { 
                                {1.2, 3.2, 5.3, 3.3},
                                {3.8, 5.1, 9.3, 8.5},
                                {4.2, 7.5, 3.9, 6.7}
                            };
    for(size_t i {}; i < std::size(carrots); i++)
    {
        for(int j = cols-1; j >= 0; j--)
        {
            std::cout << carrots[i][j] << " ";
        }

        std::cout << "\n";
    }
     //look into 'snaking' through the array. Also use std::format to clean up the array.  
                  
}