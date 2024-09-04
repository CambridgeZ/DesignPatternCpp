cmake_minimum_required(VERSION 3.0)

# 项目名称
project(StatePattern)

add_executable(StatePattern main.cpp
                            AfternoonState.cpp
                            EveningState.cpp
                            NoonState.cpp)