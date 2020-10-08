#include "../1301-1400/1333_solution_1.hpp"

#include <gtest/gtest.h>
#include <vector>
#include <iostream>

using namespace std;

TEST(problem_1333_tests, test_1)
{
    vector< vector<int> > restaurants = {
        { 1, 4, 1, 40, 10 },
        { 2, 8, 0, 50, 5  }, 
        { 3, 8, 1, 30, 4  },
        { 4, 10, 0, 10, 3 },
        { 5, 1, 1, 15, 1  }
    };

    int vegan_friendly = 1;
    int max_price = 50;
    int max_distance = 10;

    vector<int> correct_result = { 3, 1, 5 };

    Solution s;

    auto result = s.filterRestaurants(restaurants, vegan_friendly, max_price, max_distance);

    EXPECT_EQ(result, correct_result);
}

/**
 * The restaurants are the same as in test 1, 
 * but in this case the filter vegan_friendly = 0, 
 * therefore all restaurants are considered.
 */
TEST(problem_1333_tests, test_2)
{
    vector< vector<int> > restaurants = {
        { 1, 4, 1, 40, 10 },
        { 2, 8, 0, 50, 5  }, 
        { 3, 8, 1, 30, 4  },
        { 4, 10, 0, 10, 3 },
        { 5, 1, 1, 15, 1  }
    };

    int vegan_friendly = 0;
    int max_price = 50;
    int max_distance = 10;

    vector<int> correct_result = { 4, 3, 2, 1, 5 };

    Solution s;

    auto result = s.filterRestaurants(restaurants, vegan_friendly, max_price, max_distance);

    EXPECT_EQ(result, correct_result);
}
