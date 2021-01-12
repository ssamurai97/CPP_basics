/*
* basic Array data structure 
*/
#include<iostream>
#include<utility>
class IndexOutOfBound{};

class IntArray{
    public: 
    
    IntArray() = default;
    explicit IntArray(int size ){
        if(size != 0){
            d_ptr = new int[size]{};
            d_size = size;
        }
    }

    //copy contructor
    IntArray(const IntArray& source){
        if(! source.IsEmpty()){
            d_size = source.d_size;
            d_ptr =  new int[d_size];
            for(int i{0}; i < d_size; i++){
                d_ptr[i] = source.d_ptr[i];
            }
        }
    }

    friend void swap(IntArray& a, IntArray& b) noexcept{
        using std::swap;
        //memeber swap
        swap(a.d_ptr, b.d_ptr);
        swap(a.d_size, b.d_size);
    }
    IntArray& operator=(IntArray source){

        std::swap(*this, source);
        return *this;
    }


    ~IntArray(){
        delete [] d_ptr;
    }


    int size()const {
        return d_size;
    }

    bool IsEmpty()const {
        return (d_size == 0);
    }

    int operator[](int index ) const {
        if(!IsValidIndex(index)){
            throw IndexOutOfBound{};
        }
        return d_ptr[index];
    }
    int& operator[](int index){
        if(!IsValidIndex(index)){
            throw IndexOutOfBound{};
        }
        return d_ptr[index];
    }

    private:
    int* d_ptr{nullptr}; //pointer to elements
    int d_size{0}; //number of elements

    bool IsValidIndex(int index) const {
        return (index >= 0) && (index < d_size);
    }


};

//print an array elements

std::ostream& operator<<(std::ostream& os, const IntArray& a){
    os <<"[ ";
    for (auto i {0}; i < a.size(); i++)
    {
       os<< a[i] <<' ';
    }
    os<< ']';

    return os;
}
