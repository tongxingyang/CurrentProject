#pragma once
//该文件及.cpp文件为使用工具创建，可在文件中修改，工具如果发现该文件，将不再重新创建。
#include "BaseEvent.h"
class DealMseActionInfo : public CBaseEvent
{
public:
	DealMseActionInfo();
	~DealMseActionInfo();
	RegistEvent(DealMseActionInfo,S2C_MseActionInfo)

private:
	void handle(Event* e);
	bool CheckEvent(Event* e);
};
