/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on May 30, 2013, 2:02:10 PM
 */

#include "newtestclass.h"
#include "../CHomework.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testHomework_01() {
    std::vector<int> inputArr;

    inputArr.push_back(-7);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 17;
    int expectedProduct = -15;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_02() {
    std::vector<int> inputArr;

    inputArr.push_back(3);
    inputArr.push_back(14);
    inputArr.push_back(-9);
    inputArr.push_back(4);
    inputArr.push_back(-5);
    inputArr.push_back(1);
    inputArr.push_back(-12);
    inputArr.push_back(4);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 26;
    int expectedProduct = 180;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_03() {
    std::vector<int> inputArr;

    inputArr.push_back(-5);
    inputArr.push_back(1);
    inputArr.push_back(2);
    inputArr.push_back(3);
    inputArr.push_back(4);
    inputArr.push_back(5);
    inputArr.push_back(6);
    inputArr.push_back(7);
    inputArr.push_back(8);
    inputArr.push_back(-3);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 36;
    int expectedProduct = 5040;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_AllTheSame() {
    std::vector<int> inputArr;

    inputArr.push_back(7);
    inputArr.push_back(7);
    inputArr.push_back(7);
    inputArr.push_back(7);
    inputArr.push_back(7);
    inputArr.push_back(7);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 42;
    int expectedProduct = 0;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_MinAndMaxAreLocatedNear() {
    std::vector<int> inputArr;

    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(-7);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 17;
    int expectedProduct = 0;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_MinAfterMax() {
    std::vector<int> inputArr;

    inputArr.push_back(9);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(-7);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 17;
    int expectedProduct = -15;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}

void newtestclass::testHomework_THROW_lowBound() {
    std::vector<int> inputArr;

    inputArr.push_back(-101);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_THROW(cHomework.homework(inputArr, sum, product),
            std::out_of_range);
}

void newtestclass::testHomework_NO_THROW_lowBound() {
    std::vector<int> inputArr;

    inputArr.push_back(-100);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));
}

void newtestclass::testHomework_THROW_highBound() {
    std::vector<int> inputArr;

    inputArr.push_back(101);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_THROW(cHomework.homework(inputArr, sum, product),
            std::out_of_range);
}

void newtestclass::testHomework_NO_highBound() {
    std::vector<int> inputArr;

    inputArr.push_back(100);
    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));
}

void newtestclass::testHomework_MinIsAfterAndNearOfMax() {
    std::vector<int> inputArr;

    inputArr.push_back(5);
    inputArr.push_back(-1);
    inputArr.push_back(3);
    inputArr.push_back(9);
    inputArr.push_back(-7);

    int sum;
    int product;
    CHomework cHomework;

    CPPUNIT_ASSERT_NO_THROW(cHomework.homework(inputArr, sum, product));

    int expectedSum = 17;
    int expectedProduct = 0;

    CPPUNIT_ASSERT_EQUAL(expectedSum, sum);
    CPPUNIT_ASSERT_EQUAL(expectedProduct, product);
}
