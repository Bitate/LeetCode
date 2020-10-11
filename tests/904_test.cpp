#include "../901-1000/904_solution_1.hpp"

#include <gtest/gtest.h>
#include <vector>
#include <iostream>

using namespace std;

TEST(problem_904_tests, test_case_1)
{
    Solution s;

    vector<int> input = { 1, 2, 1 };
    /**
     * We can collect [1, 2, 1]
     */
    int output = 3;

    EXPECT_EQ( s.totalFruit(input), output );
}   

TEST(problem_904_tests, test_case_2)
{
    Solution s;

    vector<int> input = { 0, 1, 2, 2 };
    /**
     * We can collect [1, 2, 2].
     * If we started at the first 
     * tree, we would only collect
     * [0, 1]
     */
    int output = 3;

    EXPECT_EQ( s.totalFruit(input), output );
}   

TEST(problem_904_tests, test_case_3)
{
    Solution s;

    vector<int> input = { 3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4 };
    /**
     * We can collect [1, 2, 1, 1, 2].
     * If we started at the first tree
     * or the eighth tree, we would only
     * collect 4 fruits.
     */
    int output = 5;

    EXPECT_EQ( s.totalFruit(input), output );
}   

TEST(problem_904_tests, test_case_4)
{
    Solution s;

    vector<int> input = { 1, 2, 3, 2, 2 };
    /**
     * We collect [2, 3, 2, 2].
     * If we started at the first tree,
     * we would only collect [1, 2]
     */
    int output = 4;

    EXPECT_EQ( s.totalFruit(input), output );
}   
