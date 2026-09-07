#pragma once
#include "EAppControl.h"


//图形按钮

struct CKrnl_PicBtn :public EAppControl
{
public:
	CKrnl_PicBtn();
	static CKrnl_PicBtn* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};