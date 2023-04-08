# OpenGL Example using CMake

## Build Instructions

download the freeglut header and binary files from the link below:

[freeglut header and binary files](https://www.transmissionzero.co.uk/files/software/development/GLUT/freeglut-MinGW.zip)

Now extract the zip file, and copy the include folder as it is to the project root.

Similarly copy the `*.a` files from `lib` to `lib` directory inside the project root.

Also copy the `.dll` file from `bin` to project root.

NOTE: This build system only works with `x32`, so only copy the `x32` binaries `*.a` or `*.dll` files.

Finally the project structure should look something like below before building.

```text
- .vscode/
- include/
    - GL
        - glut.h
        - freeglut.h
        ...
- lib/
    - libfreeglut.a
    - libfreeglut_static.a
- .gitignore
- CMakeLists.txt
- freeglut.dll
- main.cpp
- README.md
```

Use following commands to build and run

```shell
cmake -B build -G "Unix Makefiles"
cmake --build build
./build/main
```

This make sure to build the project using `Unix Makefiles` build system, cause the binaries for freeglut downloaded were build using the same.
