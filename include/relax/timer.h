#include <boost/timer/timer.hpp>

#ifndef RELAX_TIMER_H_
#define RELAX_TIMER_H_

namespace relax {

using boost::timer::auto_cpu_timer;

class timer{
public:
    timer() : impl_(auto_cpu_timer()) {

    }
private:
    auto_cpu_timer impl_;
};

} //relax

#endif
