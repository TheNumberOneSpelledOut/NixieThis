#include "Clock.h"

#include <Time.h>

Clock::Clock(NixieTube *tubes[])
: m_tubes(tubes)
{

}

Clock::Update()
{
  if(timeStatus() != timeNotSet)
  {
    int hour = Hour();
    int minute = Minute();
    int second = Second();

    tube[0]->setNumber(hour / 10);
    tube[1]->setNumber(hour % 10);
    tube[2]->setNumber(minute / 10);
    tube[3]->setNumber(minute % 10);
    tube[4]->setNumber(second / 10);
    tube[5]->setNumber(second % 10);
  }
  else
  {
    log.info("time not set");
  }
}