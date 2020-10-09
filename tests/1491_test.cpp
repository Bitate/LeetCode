#include "../1401-1500/1491_solution_1.hpp"

#include <gtest/gtest.h>

TEST(problem_1491_tests, test_case_1)
{
    Solution s;

    vector<int> input = { 4000, 3000, 1000, 2000 };
    double output = 2500;

    EXPECT_EQ( s.average(input), output );
}

TEST(problem_1491_tests, test_case_2)
{
    Solution s;
    
    vector<int> input = { 1000, 2000, 3000 };
    double output = 2000;

    EXPECT_EQ( s.average(input), output );
}

TEST(problem_1491_tests, test_case_3)
{
    Solution s;
    
    vector<int> input = { 6000, 5000, 4000, 3000, 2000, 1000 };
    double output = 3500;

    EXPECT_EQ( s.average(input), output );
}

TEST(problem_1491_tests, test_case_4)
{
    Solution s;
    
    vector<int> input = { 8000, 9000, 2000, 3000, 6000, 1000 };
    double output = 4750;

    EXPECT_EQ( s.average(input), output );
}