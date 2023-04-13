#include "Juice.h"
#include "Fruit.h"
#include <iostream>

FJuice::FJuice(FFruit* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << " 주스가 만들어 졌습니다." << std::endl;
}

FJuice::~FJuice()
{
}
