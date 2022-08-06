# DynamicLoadingSharedLib

## Build
```
#libfoo
g++ -g -c -fPIC foo.cpp
g++ -g -Wall -shared -fPIC -o libfoo.so foo.o

#application
g++ -g -c main.cpp
g++ -g -Wall -Wl,-rpath=. -o main main.o -ldl
```
## Run
```
$ ./main.exe 
hello from foo
```
