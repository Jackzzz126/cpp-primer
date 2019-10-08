#ifndef _ROCK_H_
#define _ROCK_H_

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>
#include <iostream>

namespace ROCK_NS{//BO_NS_ROCK

namespace time{//BO_NS_TIME
//define
long curTimeMs();
};//EO_NS_TIME

namespace string{//BO_NS_STRING
std::vector<std::string> splitStr(const std::string &str, const std::string &pattern);
};//EO_NS_STRING

};//EO_NS_ROCK
//------------------bof ns time--------------------------------
long ROCK_NS::time::curTimeMs() {
	return 0;
}
//------------------eof ns time--------------------------------

//------------------bof ns string--------------------------------
//codes
std::vector<std::string> ROCK_NS::string::splitStr(const std::string &str, const std::string &pattern) {
	std::vector<std::string> resVec;

	if ("" == str) {
		return resVec;
	}
	size_t posStart = 0;
	size_t posEnd = str.find(pattern);

	while (posEnd != std::string::npos) {
		resVec.push_back(str.substr(posStart, posEnd - posStart));
		posStart = posEnd + 1;
		posEnd = str.find(pattern, posStart);
	}
	resVec.push_back(str.substr(posStart, posEnd));

	return resVec;
}
//------------------bof ns string--------------------------------

#endif// _ROCK_H_

