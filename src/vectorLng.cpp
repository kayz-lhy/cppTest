#include "vectorLng.h"


//DEFINE ELEM *it


namespace veclng {

    // constructor, with parameter len for the length of the vector and init all elem into 0;
    vectorLng::vectorLng(int len) {
        this->len=len;
        this->vec.resize(len);
        for (auto it = vec.begin();it<vec.end();it++)
            ELEM = 0;
    }

    // change all the elem into int parameter 'elem';
    void vectorLng::init(int elem) {
        for(auto it = vec.begin();it<vec.end();it++){
            ELEM = elem;
        }
    }

    // print all the elem in the vector;
    void vectorLng::print() {
        for (auto it = vec.begin();it<vec.end();it++){
            std::cout<<*it<<std::endl;
        }
    }

    // return if the vector is empty;
    bool vectorLng::isEmpty() const {
        if(this->len==0)
            return true;
        else
            return false;
    }

    // reverse the vector;
    void vectorLng::reverse() {
        std::reverse(this->vec.begin(),this->vec.end());
    }

    // append an elem;
    void vectorLng::append(int elem) {
        this->vec.push_back(elem);
        (this->len)++;
    }
} // veclng