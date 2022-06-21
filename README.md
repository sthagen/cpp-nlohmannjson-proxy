# cpp-nlohmannjson-proxy

Experimental third party proxy of nlohmann/json.

## Usage

Generate build files:

```console
❯ cmake -S . -B build
# ...
```

Build (in parallel):

```console
❯ cmake --build build --parallel 2
[ 50%] Building CXX object examples/CMakeFiles/basic.dir/basic.cpp.o
[ 50%] Building CXX object CMakeFiles/nlohmannjson_test.dir/main.cpp.o
[ 75%] Linking CXX executable basic
[ 75%] Built target basic
[100%] Linking CXX executable nlohmannjson_test
[100%] Built target nlohmannjson_test
```

Execute tests:

```console
❯ build/nlohmannjson_test
[doctest] doctest version is "2.4.4"
[doctest] run with "--help" for options
===============================================================================
[doctest] test cases: 1 | 1 passed | 0 failed | 0 skipped
[doctest] assertions: 2 | 2 passed | 0 failed |
[doctest] Status: SUCCESS!
```

Execute basic example:

```console
❯ build/examples/basic
compact:  {"happy":true,"pi":3.14156}
indented:
{
    "happy": true,
    "pi": 3.14156
}
```

## Status

Experimental.

**Note**: The default branch is `default`.
