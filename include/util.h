#ifndef _UTIL_H_
#define _UTIL_H_
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

namespace util{//BEGIN_OF_NS_UTIL

//define
vector<string> splitStr(const string &str, const string &pattern);

//codes
vector<string> splitStr(const string &str, const string &pattern) {
	vector<string> resVec;

	if ("" == str) {
		return resVec;
	}
	size_t posStart = 0;
	size_t posEnd = str.find(pattern);

	while (posEnd != string::npos) {
		resVec.push_back(str.substr(posStart, posEnd - posStart));
		posStart = posEnd + 1;
		posEnd = str.find(pattern, posStart);
	}
	resVec.push_back(str.substr(posStart, posEnd));

	return resVec;
}

};//END_OF_NS_UTIL
#endif//_UTIL_H_
