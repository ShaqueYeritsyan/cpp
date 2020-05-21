g++ -c li2.cpp
ar rvs lib2.a lib2.o
g++ -c lib1.cpp
ar rvs lib1.a lib1.o
g++ static_library.cpp lib1.a lib2.a
