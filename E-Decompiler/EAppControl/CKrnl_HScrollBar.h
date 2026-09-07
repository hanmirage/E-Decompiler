#pragma once
#include "EAppControl.h"

//横向滚动条

struct CKrnl_HScrollBar :public EAppControl
{
public:
	CKrnl_HScrollBar();
	static CKrnl_HScrollBar* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};