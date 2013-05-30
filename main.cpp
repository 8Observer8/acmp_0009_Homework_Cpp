/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on May 30, 2013, 1:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "CHomework.h"

template <class T>
void printArr(const std::vector<T> v) {
    for (std::size_t i = 0; i < v.size(); i++) {
        if (i != v.size() - 1) {
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    std::vector<int> inputArr;
    int sum;
    int product;
    CHomework cHomework;

    // Normal call
    inputArr.push_back(-7);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    try {
        cHomework.homework(inputArr, sum, product);
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
        exit(1);
    }

    printArr(inputArr);
    std::cout << "The sum of the positive elements of the array: " <<
            sum << std::endl;
    std::cout << "The product numbers arranged between the " <<
            "minimum and maximum elements: " <<
            product << std::endl;

    // Call with the exception generation
    inputArr.clear();

    inputArr.push_back(101);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    std::cout << std::endl;
    try {
        cHomework.homework(inputArr, sum, product);
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
        exit(1);
    }
    std::cout << "The exception out_of_range has not occurred" << std::endl;

    return 0;
}

