/* 
 * File:   CHomework.cpp
 * Author: Ivan
 * 
 * Created on May 30, 2013, 1:51 PM
 */

#include <algorithm>
#include "CHomework.h"

void CHomework::homework(const std::vector<int>& inputArr,
        int& sum,
        int& product) throw (std::out_of_range) {

    sum = 0;
    product = 1;

    // Generate an exception if the input data is out of range
    for (std::size_t i = 0; i < inputArr.size(); i++) {
        if ((inputArr[i] < -100) || (inputArr[i] > 100)) {
            throw std::out_of_range("Input out of range: [-100, 100]");
        }
    }

    // Find the sum of the positive elements of the array
    for (std::size_t i = 0; i < inputArr.size(); i++) {
        if (inputArr[i] > 0) {
            sum += inputArr[i];
        }
    }
    
    // Find product between the first maximum and minimum elements of an array
    int minElem = *std::min_element(inputArr.begin(), inputArr.end());
    int maxElem = *std::max_element(inputArr.begin(), inputArr.end());
    
    std::vector<int>::const_iterator itMinElem = std::find(inputArr.begin(),
            inputArr.end(), minElem);
    std::vector<int>::const_iterator itMaxElem = std::find(inputArr.begin(),
            inputArr.end(), maxElem);
    
    if (itMinElem == itMaxElem) {
        product = 0;
        return;
    }
    
    std::vector<int>::const_iterator itBeginProduct;
    std::vector<int>::const_iterator itEndProduct;
    if (itMinElem < itMaxElem) {
        itBeginProduct = itMinElem;
        itEndProduct = itMaxElem;
    }
    else {
        itBeginProduct = itMaxElem;
        itEndProduct = itMinElem;
    }
    
    if (itBeginProduct == itEndProduct-1) {
        product = 0;
        return;
    }
    
    for (std::vector<int>::const_iterator it = itBeginProduct+1;
            it < itEndProduct; it++) {
        product *= *it;
    }
}
