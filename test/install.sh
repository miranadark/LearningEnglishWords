echo "Compiling gtests ..."
g++ -Wall -Werror -std=c++1z -Igoogletest/include -Igoogletest -Lgoogletest/lib -o Gtests.exe \
    googletest/lib/libgtest.a \
    googletest/src/gtest-all.cc main.cpp \
    main_test.cpp -pthread