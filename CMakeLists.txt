cmake_minimum_required(VERSION 3.13)
project(GDB-Valgrind-Discussion)
add_compile_options("-g")
add_executable(gdb gdb.c)
add_executable(eo EvenOdd.c)
add_executable(AvgFun AvgFun.c)
add_executable(AvgNestFun AvgNestFun.c)
add_executable(d1 d1.c)
add_executable(d1c d1c.c)
add_executable(d1ml d1ml.c)
add_executable(sfl sfl.c)
add_executable(sflc sflc.c)
