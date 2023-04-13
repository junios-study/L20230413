#include "Mixer.h"
#include "Fruit.h"
#include "Orange.h"
#include "Apple.h"
#include "Pineapple.h"
#include <iostream>
#include "Juice.h"

using namespace std;


FMixer::FMixer()
{
}

FMixer::~FMixer()
{
}

FJuice* FMixer::MakeJuice(FFruit* Resource) 
{
	FJuice* NewJuice = new FJuice(Resource);

	delete Resource;

	return NewJuice;
}
