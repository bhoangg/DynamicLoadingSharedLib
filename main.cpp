// g++ -g -c main.cpp
// g++ -g -Wall -Wl,-rpath=. -o main main.o -ldl
// ./main

#include <iostream>
#include <dlfcn.h>
int main ()
{
    void* handle = dlopen ("libfoo.so", RTLD_LAZY);
    if(handle == nullptr){
        std::cout << "error: " << dlerror() << std::endl;
        return -1;
    }
    void (*test) () = (void (*)())(dlsym (handle, "foo"));
    if(test == nullptr){
        std::cout << "error: " << dlerror() << std::endl;
    } else {
        (*test) ();
    }
    dlclose (handle);
    return 0;
}
