#pragma once
#include "EAppControl.h"

//拖放对象

struct CKrnl_DropTarget :public EAppControl
{
public:
	CKrnl_DropTarget();
	static CKrnl_DropTarget* create();
public:
	std::string GetEventName(int eventIndex)override;
	bool InitControlExtraData(unsigned int propertyAddr, unsigned int propertySize) override;
	std::string GetPropertyName(unsigned int propertyIndex) override;
};