#pragma once
#include "EAppControl.h"

//滑块条

struct CKrnl_SliderBar :public EAppControl
{
public:
	CKrnl_SliderBar();
	static CKrnl_SliderBar* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};