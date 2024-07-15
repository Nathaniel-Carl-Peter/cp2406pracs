rm my_prog.exe
g++ -std=c++20 -fmodules-ts -o my_prog.exe helloworld_std20.cpp
# g++ -std=c++2a -fmodules-ts -o my_prog.exe helloworld_std20.cpp
./my_prog.exe
# g++ -o my_prog /Users/jc138691/dev/y2308gh_cp2406_cpp/textbook_prof_cpp_5ed/Code_dev/c01_code/prog02_helloworld_std20/hello_world_old_style.cpp
# g++ -std=c++2a -o <executable_name> <source1.cpp> [source2.cpp ...]