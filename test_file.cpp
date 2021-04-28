
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

TEST_CASE("Input valid") {
  
  int current_data[] = {3,3,5,10,12,11};
  int data_size = current_data[]/current_data[0];
  Boolean valid_input = validateReading(curren_data, data_size);
  
  REQUIRE(valid_input == true);
}
