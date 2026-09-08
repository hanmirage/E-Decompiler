#pragma once
#include "EAppControl.h"

//外形框

struct CKrnl_ShapeBox :public EAppControl
{
public:
	CKrnl_ShapeBox();
	static CKrnl_ShapeBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};