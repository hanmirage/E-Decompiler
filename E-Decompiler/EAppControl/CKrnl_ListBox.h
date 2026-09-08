#pragma once
#include "EAppControl.h"

//列表框

struct CKrnl_ListBox :public EAppControl
{
public:
	CKrnl_ListBox();
	static CKrnl_ListBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};