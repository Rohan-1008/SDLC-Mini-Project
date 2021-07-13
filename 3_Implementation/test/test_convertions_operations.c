#include "unity.h"
#include <convertions_operations.h>

/* Modify these two lines according to the project */
#include <convertions_operations.h>
#define PROJECT_NAME    "Converter"


/* Prototypes for all the test functions */

void test_Bin_to_Dec(void); 
void test_Bin_to_Oct(void); 
void test_Bin_to_Hex(void); 
void test_Dec_to_Bin(void);  
void test_Dec_to_Oct(void); 
void test_Dec_to_Hex(void); 
void test_Oct_to_Bin(void); 
void test_Oct_to_Dec(void); 
void test_Oct_to_Hex(void); 
void test_Hex_to_Bin(void); 
void test_Hex_to_Dec(void); 
void test_Hex_to_Oct(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Bin_to_Dec);
  RUN_TEST(test_Bin_to_Oct);
  RUN_TEST(test_Bin_to_Hex);
  RUN_TEST(test_Dec_to_Bin);
  RUN_TEST(test_Dec_to_Oct);
  RUN_TEST(test_Dec_to_Hex);
  RUN_TEST(test_Oct_to_Bin);
  RUN_TEST(test_Oct_to_Dec);
  RUN_TEST(test_Oct_to_Hex);
  RUN_TEST(test_Hex_to_Bin);
  RUN_TEST(test_Hex_to_Dec);
  RUN_TEST(test_Hex_to_Oct);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_Bin_to_Dec(void)
{
  TEST_ASSERT_EQUAL(2, Bin_to_Dec(10));
  
  TEST_ASSERT_EQUAL(3, Bin_to_Dec(11));

  TEST_ASSERT_EQUAL(0, Bin_to_Dec(00));
}
void test_Bin_to_Oct(void)
{
  TEST_ASSERT_EQUAL(2, Bin_to_Oct(10));
  
  TEST_ASSERT_EQUAL(3, Bin_to_Oct(11));

  TEST_ASSERT_EQUAL(0, Bin_to_Oct(00));
}
void test_Bin_to_Hex(void)
{
  TEST_ASSERT_EQUAL(2, Bin_to_Hex(10));
  
  TEST_ASSERT_EQUAL(3, Bin_to_Hex(11));

  TEST_ASSERT_EQUAL(0, Bin_to_Hex(00));
}
void test_Dec_to_Bin(void)
{
  TEST_ASSERT_EQUAL(01, Dec_to_Bin(1));
  
  TEST_ASSERT_EQUAL(11, Dec_to_Bin(3));

  TEST_ASSERT_EQUAL(00, Dec_to_Bin(0));
}
void test_Dec_to_Oct(void)
{
  TEST_ASSERT_EQUAL(12, Dec_to_Oct(10));
  
  TEST_ASSERT_EQUAL(13, Dec_to_Oct(11));

  TEST_ASSERT_EQUAL(10, Dec_to_Oct(8));
}
void test_Dec_to_Hex(void)
{
  TEST_ASSERT_EQUAL('A', Dec_to_Hex(10));
  
  TEST_ASSERT_EQUAL('B', Dec_to_Hex(11));

  TEST_ASSERT_EQUAL(8, Dec_to_Hex(8));
}
void test_Oct_to_Bin(void)
{
  TEST_ASSERT_EQUAL(10, Oct_to_Bin(2));
  
  TEST_ASSERT_EQUAL(11, Oct_to_Bin(3));

  TEST_ASSERT_EQUAL(00, Oct_to_Bin(0));
}
void test_Oct_to_Dec(void)
{
  TEST_ASSERT_EQUAL(8, Oct_to_Dec(10));
  
  TEST_ASSERT_EQUAL(9, Oct_to_Dec(11));

  TEST_ASSERT_EQUAL(16, Oct_to_Dec(20));
}
void test_Oct_to_Hex(void)
{
  TEST_ASSERT_EQUAL(8, Oct_to_Hex(10));
  
  TEST_ASSERT_EQUAL(9, Oct_to_Hex(11));

  TEST_ASSERT_EQUAL(10, Oct_to_Hex(20));
}
void test_Hex_to_Bin(void)
{
  TEST_ASSERT_EQUAL(10, Hex_to_Bin('2'));
  
  TEST_ASSERT_EQUAL(11, Hex_to_Bin(3));

  TEST_ASSERT_EQUAL(00, Hex_to_Bin(0));
}
void test_Hex_to_Dec(void)
{
  TEST_ASSERT_EQUAL(16, Hex_to_Dec(10));
  
  TEST_ASSERT_EQUAL(12, Hex_to_Dec('C'));

  TEST_ASSERT_EQUAL(15, Hex_to_Dec('F'));
}
void test_Hex_to_Oct(void)
{
  TEST_ASSERT_EQUAL(20, Hex_to_Oct(10));
  
  TEST_ASSERT_EQUAL(13, Hex_to_Oct('A'));

  TEST_ASSERT_EQUAL(17, Hex_to_Oct('F'));
}
