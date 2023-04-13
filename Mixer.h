#pragma once
class FMixer
{
public:
	FMixer();
	virtual ~FMixer();

	class FJuice* MakeJuice(class FFruit* Resource);

	int Number = 0;
};

