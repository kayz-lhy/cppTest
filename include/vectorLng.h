/**
 * @author kayz
 *
 */

#ifndef CPPTEST_VECTORLNG_H
#define CPPTEST_VECTORLNG_H

#define ELEM *it

#include "vector"
#include "iostream"
#include "algorithm"

namespace veclng {

    class vectorLng {

    private:
        std::vector<int> vec;
        int len;
    public:
        explicit vectorLng(int len);

        void init(int elem);

        void print();

        bool isEmpty() const;

        void reverse();

        void append(int elem);
    };

} // veclng

#endif //CPPTEST_VECTORLNG_H
