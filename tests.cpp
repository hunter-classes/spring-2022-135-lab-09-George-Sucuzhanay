#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"


// add your tests here
TEST_CASE("FixLength Function"){
    Coord3D p = {10, 20, 30};
	CHECK(fixLength(length(&p), 3) == 37.416);
	p = {0,0,0};

	CHECK(fixLength(length(&p), 3) == 0.000);
	p = {20, 50, 100};
}
