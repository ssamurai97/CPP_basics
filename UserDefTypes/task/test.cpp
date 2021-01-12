#include"timestamp.hpp"
#include"task.hpp"
//#include"concept.hpp"
int main(){
    // TimeStamp ts;

    // time_t now = time(0);

    // ts.set();
    // dump(ts);

    time_t now = time(0);
    Task t1("Defrost Pizza"),
    t2("Open Beer"),
    t3("studing programming");
    t1.setST(now);
    t1.setFT(now + 3600);
    t2.setST(t1.getFT());
    t2.setFT(t2.getST() + 2);
    t3.setST(t2.getFT() + 1);
    t3.setFT(t3.getST() + 7200 );
    return 0;
}

