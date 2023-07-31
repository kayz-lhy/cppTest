#include "iostream"
#include "vectorLng.h"
using std::cout,std::endl;

int main(){
    veclng::vectorLng vecTest(10);
    vecTest.init(10);
    vecTest.traverse();
    cout<<vecTest.isEmpty()<<endl;
    return 0;
}
