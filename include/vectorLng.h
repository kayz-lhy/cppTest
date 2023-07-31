/**
 * @author kayz
 *
 */

#ifndef CPPTEST_VECTORLNG_H
#define CPPTEST_VECTORLNG_H

#include "vector"
#include "iostream"
using std::cout,std::cin,std::endl,std::vector;
namespace veclng {
    class vectorLng{
    private:
        vector<int> vec;
        int len;
    public:
        explicit vectorLng(int len);
        void init(int elem);
        void traverse();
        bool isEmpty() const;
    };

} // veclng

#endif //CPPTEST_VECTORLNG_H
