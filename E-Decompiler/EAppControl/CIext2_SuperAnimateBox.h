#pragma once
#include "EAppControl.h"

//高级影像框

struct CIext2_SuperAnimateBox :public EAppControl
{
public:
	CIext2_SuperAnimateBox();
	static CIext2_SuperAnimateBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};