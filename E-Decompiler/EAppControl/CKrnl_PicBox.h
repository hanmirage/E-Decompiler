#pragma once
#include "EAppControl.h"

//图片框


struct CKrnl_PicBox :public EAppControl
{
public:
	CKrnl_PicBox();
	static CKrnl_PicBox* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};