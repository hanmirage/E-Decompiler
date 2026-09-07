#pragma once
#include "EAppControl.h"

//单选框

struct CKrnl_RadioBox :public EAppControl
{
public:
	CKrnl_RadioBox();
	static CKrnl_RadioBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};