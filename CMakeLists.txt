cmake_minimum_required(VERSION 3.17)
project(Puncturable_PRF)

set(CMAKE_CXX_STANDARD 14)
FIND_PACKAGE(OpenSSL REQUIRED)

add_executable(main main.cpp ./GGM/GGMNode.h ./GGM/GGMTree.cpp ./GGM/GGMTree.h ./GGM/Utils.c ./GGM/Utils.h Punc_PRF.cpp Punc_PRF.h)

TARGET_LINK_LIBRARIES(main OpenSSL::Crypto)