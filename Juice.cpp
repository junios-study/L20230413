#include "Juice.h"
#include "Fruit.h"
#include <iostream>

FJuice::FJuice(FFruit* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << " �ֽ��� ����� �����ϴ�." << std::endl;
}

FJuice::~FJuice()
{
}
