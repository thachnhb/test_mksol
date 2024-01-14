#include "pch.h"
#include <gtest/gtest.h>
#include "C:\Users\DELL\Desktop\MSKOL_Test\MSKOL_Test\MyBigNumber.cpp"

// Test case 1: Testing reverseStn function
TEST(MyBigNumberTest, ReverseStn) {
    MyBigNumber myBigNumber;
    string stn1 = "12345";
    string reversed1 = myBigNumber.reverseStn(stn1);
    EXPECT_EQ(reversed1, "54321");
}

// Test case 2: Testing sum function
TEST(MyBigNumberTest, Sum) {
    MyBigNumber myBigNumber;
    string stn2 = "123";
    string stn3 = "456";
    string sumResult = myBigNumber.sum(stn2, stn3);
    EXPECT_EQ(sumResult, "579");
}

// Test case 3: Testing sum function with carry
TEST(MyBigNumberTest, SumWithCarry) {
    MyBigNumber myBigNumber;
    string stn4 = "99";
    string stn5 = "1";
    string sumResult2 = myBigNumber.sum(stn4, stn5);
    EXPECT_EQ(sumResult2, "100");
}

// Test case 4: Testing sum function with numbers of different lengths
TEST(MyBigNumberTest, SumWithDifferentLengths) {
    MyBigNumber myBigNumber;
    string stn6 = "123";
    string stn7 = "4567";
    string sumResult3 = myBigNumber.sum(stn6, stn7);
    EXPECT_EQ(sumResult3, "4690");
}

// Test case 5: Testing reverseStn function with a number that ends with zero
TEST(MyBigNumberTest, ReverseStnWithZeroEnd) {
    MyBigNumber myBigNumber;
    string stn8 = "123450";
    string reversed2 = myBigNumber.reverseStn(stn8);
    EXPECT_EQ(reversed2, "054321");
}

// Test case 6: Testing sum function with numbers of different lengths and one number starts with 0
TEST(MyBigNumberTest, SumWithDifferentLengthsAndZeroStart) {
    MyBigNumber myBigNumber;
    string stn9 = "0123";
    string stn10 = "45678";
    string sumResult4 = myBigNumber.sum(stn9, stn10);
    EXPECT_EQ(sumResult4, "45801");
}

// Test case 7: Testing sum function with two very large numbers of different lengths
TEST(MyBigNumberTest, SumWithVeryLargeNumbers) {
    MyBigNumber myBigNumber;
    std::string stn11 = "34516316314723712514";
    std::string stn12 = "7345146153273132672";
    std::string sumResult5 = myBigNumber.sum(stn11, stn12);
    EXPECT_EQ(sumResult5, "41861462467996845186");
}

//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}