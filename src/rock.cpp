#include "rock.h"
//------------------bof ns time--------------------------------
_uint64 rock::time::CurTimeMs() {
	auto now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
	return now.count();
}
_uint32 rock::time::CurTime() {
	time_t now = std::time(NULL);
	return now;
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
