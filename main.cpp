#include <iostream>
#include "Mixer.h"
#include "Orange.h"
#include "Apple.h"
#include "Pineapple.h"
#include "Juice.h"
#include "Grape.h"

using namespace std;

int main()
{
	FMixer* Mixer = new FMixer();

	FApple* Apple = new FApple();
	FOrange* Orange = new FOrange();
	FPineapple* Pineapple = new FPineapple();
	FGrape* Grape = new FGrape();

	FJuice* PineAppleJuice = Mixer->MakeJuice(Pineapple);
	FJuice* AppleAppleJuice = Mixer->MakeJuice(Apple);
	FJuice* OrangeAppleJuice = Mixer->MakeJuice(Orange);
	FJuice* GrapeAppleJuice = Mixer->MakeJuice(Grape);


	delete Mixer;
	delete PineAppleJuice;
	delete AppleAppleJuice;
	delete OrangeAppleJuice;
	delete GrapeAppleJuice;

	return 0;
}