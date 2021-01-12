#include"task.hpp"


using namespace std;

Task::Task(const char ID[]){
    strncpy(id, ID, MaxId);
    id[MaxId] ='\0';
    strcpy(logFile,"log.dat");
    setST();
    ft = st;
}

Task::~Task(){
    logToFile();
}

void Task::logToFile(){
    if(getFT() == getST())
    setFT();
    //log the task vital statistics
    ofstream outfile( logFile, ios::app);
    outfile<<endl<<"ID "<< id << '\n';
    outfile<<" ST: " << getStrST();
    outfile<< " FT: "<< getStrFT();
    outfile<< " DU: "<< getDU();
    outfile << '\n';
    outfile.close();    
}

void Task::setST(time_t ST ){
    st.set(ST);
}

time_t Task::getST(){
    return st.get();
}

const string Task::getStrST(){
    return st.get_as_string();
}

void Task::setFT(time_t FT){
    ft.set(FT);

}

time_t Task::getFT(){
    return ft.get();
}


const string Task::getStrFT(){
    return ft.get_as_string();
}


double Task::getDU(){
    return difftime( getFT(), getST());

}