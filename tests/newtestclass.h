/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on May 30, 2013, 2:02:10 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testHomework_01);
    CPPUNIT_TEST(testHomework_02);
    CPPUNIT_TEST(testHomework_03);
    CPPUNIT_TEST(testHomework_AllTheSame);
    CPPUNIT_TEST(testHomework_MinAfterMax);
    CPPUNIT_TEST(testHomework_MinAndMaxAreLocatedNear);
    CPPUNIT_TEST(testHomework_THROW_lowBound);
    CPPUNIT_TEST(testHomework_NO_THROW_lowBound);
    CPPUNIT_TEST(testHomework_THROW_highBound);
    CPPUNIT_TEST(testHomework_NO_highBound);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testHomework_01();
    void testHomework_02();
    void testHomework_03();
    void testHomework_AllTheSame();
    void testHomework_MinAfterMax();
    void testHomework_MinAndMaxAreLocatedNear();
    void testHomework_THROW_lowBound();
    void testHomework_NO_THROW_lowBound();
    void testHomework_THROW_highBound();
    void testHomework_NO_highBound();
};

#endif	/* NEWTESTCLASS_H */

