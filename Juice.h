#pragma once
#include <iostream>

class FJuice
{
public:
	FJuice(class FFruit* Resource);
	virtual ~FJuice();

	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

