# Notes

## General

```
>> cmake -B <build tree> -S <source tree>
>> cmake --build <build tree>
```
Notes: __build tree__ is the path to target/output directory, __source tree__ is the path at which your source code is located.

__Case 1__
```
>> cmake -S ./project -B ./build
```


__Case 2__ - Build in the current directory, but take the source from one directory up:
```
>> cmake -S ..
```

__Case 3__ - Build in the ./build directory, and use a source from the current directory:
```
>> cmake -B build
```

## Generators
Notes: There are two main types of generators – the ones where there are many Makefile flavors and Ninja generators, which are generally used from the command line, and the ones that create build files for an IDE such as Visual Studio or Xcode.

### Check Available Generators
```
>> cmake --help
```

### Specify Generator
```
>> cmake .. -G Ninja
```

## Prepopulate Cached Information
```
>> cmake -C <initial-cache-script> <path-to-source>
```

```
>> cmake -D <var>[:<type>]=<value> <path-to-source>
```

__Case 1__
```
>> cmake -S . -B build -D CMAKE_BUILD_TYPE=Release
```

## Details
### add_library & target_link_libraries
- __add_library__ is used to define and build a library target in your CMake project. This can be a static library (.a on Linux, .lib on Windoes) or a shared library (.so on Linux, .dll on Windows).

- It takes at least two arguments: the name of the library you want to create and a list of source files that should be compiled to build the library.

- __target_link_libraries__ is used to specify the libraries that your executable or another library target depends on. It essentially links one or more libraries to a specific target (either an executable or another library).

- It takes the target you want to link to as the first argument and the libraries you want to link with as the subsequent arguments.

Example:
```
add_library(x_library x_source.cpp)
add_executable(x_executable x_main.cpp)
target_link_libraries(x_executable x_library)
```
