#pragma once
#include <string>

class FFruit
{
public:
	FFruit();
	virtual ~FFruit();

	//accessor
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

