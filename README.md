# Overview

Reproduce: `find_package(PostgreSQL REQUIRED)` failure by CMake when libpq 10.4 
Debug build by conan.

## Command

```bash
mkdir build
cd build
conan install .. --build missing -s build_type=Debug
cmake -DCMAKE_BUILD_TYPE=Debug ..
```
