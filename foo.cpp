// g++ -g -c -fPIC foo.cpp
// g++ -g -Wall -shared -fPIC -o libfoo.so foo.o

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

void foo(){
    std::cout << "hello from foo" << std::endl;
}

#ifdef __cplusplus
}
#endif
