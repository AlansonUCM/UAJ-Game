#pragma once
#include <string>

using namespace std;

class AnyarothError //: public runtime_error
{
public:
	AnyarothError(const string& m) /*: runtime_error("An 'Anayroth Error' of type " + m)*/ {}
};