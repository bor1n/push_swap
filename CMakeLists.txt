cmake_minimum_required(VERSION 3.19)
project(push_swap)

set(CMAKE_C_STANDARD 99)

add_subdirectory(libft)
add_executable(push_swap src/main.c src/push_swap.c src/swap.c src/rotate.c src/push.c)
target_link_libraries(push_swap PUBLIC libft)