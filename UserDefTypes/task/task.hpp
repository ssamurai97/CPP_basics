#ifndef INCLUDE_TASK_HPP
#include<iostream>
#include<ctime>
#include<fstream>
#include<cstring>
#ifndef INCLUDE_TIMESTAMP_HPP
#include"timestamp.hpp"
#endif


class Task{

    public:
    Task(const char id[]);
    Task() = delete;
    ~Task();


    //set-get methods

    void          setST( time_t st = 0);
    time_t        getST();
    const std::string  getStrST();

    void          setFT(time_t ft = 0);
    time_t        getFT();
    const std::string  getStrFT();

    void          setID(const char ID[]){
        strncpy(id,ID, MaxId);
    };

    const char* getID();
    double        getDU();
    void          logToFile();

    private:
     enum { MaxId = 50, MaxLogFile = 20};
     TimeStamp st;
     TimeStamp ft;
     char id[MaxId + 1];
     char logFile[MaxLogFile+1];
};
#endif
