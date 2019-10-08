#include "catch.hpp"

#include "rock.h"
TEST_CASE("test rock::time", "time") {
	SECTION("CurTimeMs") {
		_uint64 curTimeMs = rock::time::CurTimeMs();
		_uint32 curTime = rock::time::CurTime();
		REQUIRE(curTimeMs / 1000 == curTime);
	}
}

TEST_CASE("test rock::string", "string") {
	SECTION("split str") {
		REQUIRE(rock::string::splitStr("", ":").size() == 0);

		REQUIRE(rock::string::splitStr("aaa:bbb", ":").size() == 2);
		REQUIRE(rock::string::splitStr("aaa:bbb", ":")[1] == "bbb");

		REQUIRE(rock::string::splitStr("aaa:bbb:", ":").size() == 3);
		REQUIRE(rock::string::splitStr("aaa:bbb:", ":")[2] == "");

		REQUIRE(rock::string::splitStr(":aaa:bbb:", ":").size() == 4);
		REQUIRE(rock::string::splitStr(":aaa:bbb:", ":")[3] == "");
	}
}

