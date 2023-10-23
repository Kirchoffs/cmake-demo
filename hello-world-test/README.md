# Notes

```
>> mkdir build
>> cd build
>> cmake -S ..
>> cmake --build .
>> ctest -C DEBUG
>> ctest -R sum_integers_test -C DEBUG
>> ctest -R mul_integers_test -C DEBUG
```

To print the output of the tests, use the following command:
```
>> ctest -C DEBUG --output-on-failure
```
