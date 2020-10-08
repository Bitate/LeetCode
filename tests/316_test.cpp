#include "../301-400/316_solution_1.hpp"

#include <gtest/gtest.h>

TEST(problem_316_tests, test_case_1)
{
    string input = "cdadabcc";
    string output = "adbc";

    Solution s;
    EXPECT_EQ( s.removeDuplicateLetters(input), output );
}

TEST(problem_316_tests, test_case_2)
{
    string input = "abcd";
    string output = "abcd";
    
    Solution s;
    EXPECT_EQ( s.removeDuplicateLetters(input), output );
}

TEST(problem_316_tests, test_case_3)
{
    string input = "ecbacba";
    string output = "eacb";

    Solution s;
    EXPECT_EQ( s.removeDuplicateLetters(input), output );
}

TEST(problem_316_tests, test_case_4)
{
    string input = "leetcode";
    string output = "letcod";

    Solution s;
    EXPECT_EQ( s.removeDuplicateLetters(input), output );
}