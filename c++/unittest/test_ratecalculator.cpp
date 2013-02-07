/*
  Copyright (c)  2013  Mikael Leetmaa

  This file is part of the KMCLib project distributed under the terms of the
  GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
*/


// Include the test definition.
#include "test_ratecalculator.h"

// Include the files to test.
#include "ratecalculator.h"

#include "random.h"

// -------------------------------------------------------------------------- //
//
void Test_RateCalculator::testConstruction()
{
    // We can construct this base class.
    RateCalculator r;
}


// -------------------------------------------------------------------------- //
//
void Test_RateCalculator::testRateCallback()
{
    // Get a rate calculator.
    RateCalculator r;

    // Setup input needed to call the callback function.
    const std::vector<Coordinate> geometry;
    const std::vector<std::string> types_before;
    const std::vector<std::string> types_after;
    const double rate_constant = randomDouble01();

    const double rate0 = r.backendRateCallback(geometry,
                                               types_before,
                                               types_after,
                                               rate_constant);

    // We test that the interface in C++ only returns the rate constant again.
    CPPUNIT_ASSERT_DOUBLES_EQUAL( rate_constant, rate0, 1.0e-12 );

    // DONE
}

