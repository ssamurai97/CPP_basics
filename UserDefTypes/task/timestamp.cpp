#include"timestamp.hpp"


using namespace std;


void TimeStamp::set( long s ){
  if(s <= 0){
    stamp = time(0);
  }else
  {
    stamp = s;
  }
  
}

//get methond
time_t TimeStamp::get(){
  return stamp;

}

//get_as_string methond
const string TimeStamp::get_as_string(){
  return ctime(&stamp);
}

const string TimeStamp::extract (int offset, int count){
  char temp [30];
  strcpy(temp, ctime(&stamp));
  strncpy(string,temp + offset, count);
  string[count] ='\n';
  return string;
}

const string TimeStamp::get_year(){
  return extract(20, 4);
}

const string TimeStamp::get_month(){
  return extract(4,3);
}

const string TimeStamp::get_day(){
  return extract(0,3);
}

const string TimeStamp::get_hour(){
  return extract(11, 2);
}

const string TimeStamp::get_minutes(){
  return  extract(14, 2);
}
const string TimeStamp::get_second(){
  return extract(17, 2);
}


void dump(TimeStamp& ts){
  cout<<'\n'<<"Testing methods"<< '\n';
  cout<<'\t'<<ts.get()<<'\n';
  cout<<'\t'<<ts.get_as_string()<<'\n';
  cout<<'\t'<<ts.get_year()<<'\n';
  cout<<'\t'<<ts.get_month()<<'\n';
  cout<<'\t'<<ts.get_day()<<'\n';
  cout<<'\t'<<ts.get_hour()<<'\n';
  cout<<'\t'<<ts.get_minutes()<<'\n';
  cout<<'\t'<<ts.get_second()<<'\n';
}
