#include "iostream"
#include "vectorLng.h"
using std::cout,std::endl;

int main(){
    veclng::vectorLng vecTest(10);
    vecTest.init(10);
    vecTest.print();
    cout<<(vecTest.isEmpty()?"true":"false")<<endl;
    cout<<endl;
    vecTest.append(5);
    vecTest.reverse();
    vecTest.print();
    return 0;
}
