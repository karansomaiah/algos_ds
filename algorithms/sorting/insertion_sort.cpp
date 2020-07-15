/**
 * @file insertion_sort.cpp
 * @author Karan Napanda (you@domain.com)
 * @brief Simple Insertion Sort algorithm. Takes an array, and sorts inplace
 * @version 1.0
 * @date 2020-07-15
 * 
 * 
 */
#include <vector>
#include <stdio.h>
#include <iostream>

/**
 * @brief Function that takes in an int vector and sorts
 * it in ascending order
 * 
 * @param aFloatArray 
 */
void insertionSort(std::vector<int> &aFloatArray)
{
    std::cout << "Sorting" << std::endl;

    for (int step = 1; step < aFloatArray.size(); ++step)
    {
        int currentElement = aFloatArray[step];
        int lim = step - 1;
        while (lim >= 0 && aFloatArray[lim] > currentElement)
        {
            aFloatArray[lim + 1] = aFloatArray[lim];
            --lim;
        }
        aFloatArray[lim + 1] = currentElement;
    }
}

int main(int argc, char const *argv[])
{
    std::cout << "Running Insertion Sort" << std::endl;
    std::vector<int> rawVector{23, 67, 104, 3, 44, 89, 37, 69, 12};
    std::cout << "Original Input:" << std::endl;
    for (int i = 0; i < rawVector.size(); ++i)
    {
        std::cout << rawVector[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(rawVector);
    std::cout << "Sorted:" << std::endl;
    for (int i = 0; i < rawVector.size(); ++i)
    {
        std::cout << rawVector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
