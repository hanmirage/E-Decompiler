#pragma once
#include "EAppControl.h"

//进度条

struct CKrnl_ProcessBar :public EAppControl
{
public:
	CKrnl_ProcessBar();
	static CKrnl_ProcessBar* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};