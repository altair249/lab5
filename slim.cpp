#include "catch.hpp" 


int slim(int a,int b){ 

return a-b; 
} 
TEST_CASE("slim","[slim]"){ 
REQUIRE( slim(2,1) == 1 ); 
REQUIRE( slim(8,3) == 5 );
}
