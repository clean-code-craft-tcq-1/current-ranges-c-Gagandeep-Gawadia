
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "computation.c"

TEST_CASE("Input valid") {
  
  int current_data[] = {3,3,5,10,12,11};
  int data_size = sizeof(current_data)/sizeof(current_data[0]);
  Bool valid_input = validateReading(current_data, data_size);
  
  REQUIRE(valid_input == TRUE);
}
