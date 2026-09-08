#pragma once
#include "EAppControl.h"

//超级按钮

struct CIext2_SuperBtn :public EAppControl
{
public:
	CIext2_SuperBtn();
	static CIext2_SuperBtn* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};