#ifndef _ROCK_H_
#define _ROCK_H_

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <chrono>

#include <time.h>

typedef unsigned long long _uint64;
typedef long long _int64;
typedef unsigned int _uint32;

namespace rock{//BO_NS_ROCK

namespace time{//BO_NS_TIME
_uint64 CurTimeMs();
_uint32 CurTime();
};//EO_NS_TIME

namespace string{//BO_NS_STRING
std::vector<std::string> splitStr(const std::string &str, const std::string &pattern);
};//EO_NS_STRING

};//EO_NS_ROCK

#endif// _ROCK_H_

