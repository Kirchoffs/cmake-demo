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