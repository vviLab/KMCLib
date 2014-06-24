/*
  Copyright (c)  2014  Mikael Leetmaa

  This file is part of the KMCLib project distributed under the terms of the
  GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
*/


#ifndef __TEST_TYPEBUCKET__
#define __TEST_TYPEBUCKET__

#include <iostream>
#include <string>

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestRunner.h>

#include <cppunit/extensions/HelperMacros.h>

class Test_TypeBucket : public CppUnit::TestCase {

public:

    CPPUNIT_TEST_SUITE( Test_TypeBucket );
    CPPUNIT_TEST( testDefaultConstruction );
    CPPUNIT_TEST( testConstruction );
    CPPUNIT_TEST( testCopyConstruction );
    CPPUNIT_TEST( testAccessOperator );
    CPPUNIT_TEST( testIdentical );
    CPPUNIT_TEST( testGreaterOrEqual );
    CPPUNIT_TEST_SUITE_END();

    void testDefaultConstruction();
    void testConstruction();
    void testCopyConstruction();
    void testAccessOperator();
    void testIdentical();
    void testGreaterOrEqual();

};

#endif

