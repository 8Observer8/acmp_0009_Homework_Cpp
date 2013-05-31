/* 
 * File:   CHomework.h
 * Author: Ivan
 *
 * Created on May 30, 2013, 1:51 PM
 */

#ifndef CHOMEWORK_H
#define	CHOMEWORK_H

#include <stdexcept>
#include <vector>

/**
 * Implementation of the class CHomework
 */
class CHomework {
public:
    /**
     * Returns the sum and the product from the input array
     * 
     * @param inputArr The input array with the
     * elements from the range [-100, 100]
     * @param sum The sum of the positive elements of the array
     * @param product The product numbers arranged between the
     * minimum and maximum elements
     */
    void homework(const std::vector<int>& inputArr,
            int& sum,
            int& product) throw(std::out_of_range);
};

#endif	/* CHOMEWORK_H */

