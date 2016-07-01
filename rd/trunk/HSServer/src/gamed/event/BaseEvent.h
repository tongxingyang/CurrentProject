#pragma once
#include "EventDefine.h"
#include "GameEventHandler.h"
#include "GameDataHandler.h"
#include "common/SysLog.h"
#include "common/Clock.h"
#include "MessageDef.h"
class User;
//enum LoadStatus;

#define RegistEvent(className,event_id) \
static void createInstance(GameEventHandler* eh) \
{ \
	className* instance_ = getInstance(); \
	instance_->eh_ = eh; \
	eh->getEventHandler()->registHandler(event_id,((ProcessRoutine)className::handle_));\
}\
static className* getInstance()\
{\
	static className ins;\
	return &ins;\
}\
static void handle_(Event* e)\
{\
	className::getInstance()->handle(e);\
}

class CBaseEvent
{
public:

    CBaseEvent()
    {
        logger_ = log4cxx::Logger::getLogger("EventHelper");
    }

    virtual ~CBaseEvent()
    {
    }

protected:
    virtual void handle(Event* e) = 0;
protected:
    GameEventHandler* eh_;
    log4cxx::LoggerPtr logger_;
    static CBaseEvent* instance_;
} ;
