### test-mitsuba-as-subproject

A project to test including Mitsuba3 as a CMake subproject.

This project was set up for the Github [issue](https://github.com/mitsuba-renderer/mitsuba3/issues/1809).

### Building instructions

```
export CC=gcc-13
export CXX=g++-13
mkdir build
cd build
cmake -GNinja ..
ninja
```

### Tested environment

 - Ubuntu Noble 24.04
 -  g++ 13.3.0
 -  cmake 3.28.3
 -  ninja 1.11.1
 -  python 3.12.6



