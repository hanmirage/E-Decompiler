#pragma once
#include "EAppControl.h"

//影像框

struct CKrnl_AnimateBox :public EAppControl
{
public:
	CKrnl_AnimateBox();
	static CKrnl_AnimateBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};