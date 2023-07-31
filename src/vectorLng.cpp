#include "vectorLng.h"

namespace veclng {

    vectorLng::vectorLng(int len) {
        this->len=len;
        this->vec.resize(len);
        for (auto it = vec.begin();it<vec.end();it++)
            *it = 0;
    }

    void vectorLng::init(int elem) {
        for(auto it = vec.begin();it<vec.end();it++){
            *it = elem;
        }
    }

    void vectorLng::traverse() {
        for (auto it = vec.begin();it<vec.end();it++){
            cout<<*it<<endl;
        }
    }

    bool vectorLng::isEmpty() const {
        if(this->len==0)
            return true;
        else
            return false;
    }
} // veclng