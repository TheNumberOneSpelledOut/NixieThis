#ifndef SYNCTIME_H_
#define SYNCTIME_H_

#include "Command.h"

class SyncTime : Command
{
public:

	SyncTime();

	virtual bool interpret(char[] message);
};

#endif
