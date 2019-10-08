#include "rock.h"
//------------------bof ns time--------------------------------
long rock::time::CurTimeMs() {
	return 0;
}
//------------------eof ns time--------------------------------

//------------------bof ns string--------------------------------
//codes
std::vector<std::string> rock::string::splitStr(const std::string &str, const std::string &pattern) {
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
