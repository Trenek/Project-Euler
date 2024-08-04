cmake_minimum_required(VERSION 3.27.0)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

project(Euler LANGUAGES C)

set(MAIN_SOURCES 
    "${CMAKE_SOURCE_DIR}/main.c"
    "${CMAKE_SOURCE_DIR}/source/getDigits/getDigits.c"
    "${CMAKE_SOURCE_DIR}/source/isPrime/isPrime.c"
    "${CMAKE_SOURCE_DIR}/source/join/join.c"
    "${CMAKE_SOURCE_DIR}/source/problems/01.c"
    "${CMAKE_SOURCE_DIR}/source/problems/02.c"
    "${CMAKE_SOURCE_DIR}/source/problems/03.c"
    "${CMAKE_SOURCE_DIR}/source/problems/04.c"
    "${CMAKE_SOURCE_DIR}/source/problems/05.c"
    "${CMAKE_SOURCE_DIR}/source/problems/06.c"
    "${CMAKE_SOURCE_DIR}/source/problems/07.c"
    "${CMAKE_SOURCE_DIR}/source/problems/08.c"
    "${CMAKE_SOURCE_DIR}/source/problems/09.c"
    "${CMAKE_SOURCE_DIR}/source/problems/10.c"
    "${CMAKE_SOURCE_DIR}/source/problems/11.c"
    "${CMAKE_SOURCE_DIR}/source/problems/12.c"
    "${CMAKE_SOURCE_DIR}/source/problems/13.c"
    "${CMAKE_SOURCE_DIR}/source/problems/14.c"
    "${CMAKE_SOURCE_DIR}/source/problems/15.c"
    "${CMAKE_SOURCE_DIR}/source/problems/16.c"
    "${CMAKE_SOURCE_DIR}/source/problems/17.c"
    "${CMAKE_SOURCE_DIR}/source/problems/18.c"
    "${CMAKE_SOURCE_DIR}/source/problems/19.c"
    "${CMAKE_SOURCE_DIR}/source/problems/20.c"
    "${CMAKE_SOURCE_DIR}/source/problems/21.c"
    "${CMAKE_SOURCE_DIR}/source/problems/22.c"
    "${CMAKE_SOURCE_DIR}/source/problems/23.c"
    "${CMAKE_SOURCE_DIR}/source/problems/24.c"
    "${CMAKE_SOURCE_DIR}/source/problems/25.c"
    "${CMAKE_SOURCE_DIR}/source/problems/26.c"
    "${CMAKE_SOURCE_DIR}/source/problems/27.c"
    "${CMAKE_SOURCE_DIR}/source/problems/28.c"
    "${CMAKE_SOURCE_DIR}/source/problems/29.c"
    "${CMAKE_SOURCE_DIR}/source/problems/30.c"
    "${CMAKE_SOURCE_DIR}/source/problems/31.c"
    "${CMAKE_SOURCE_DIR}/source/problems/32.c"
    "${CMAKE_SOURCE_DIR}/source/problems/33.c"
    "${CMAKE_SOURCE_DIR}/source/problems/34.c"
    "${CMAKE_SOURCE_DIR}/source/problems/35.c"
    "${CMAKE_SOURCE_DIR}/source/problems/36.c"
    "${CMAKE_SOURCE_DIR}/source/problems/37.c"
    "${CMAKE_SOURCE_DIR}/source/problems/38.c"
    "${CMAKE_SOURCE_DIR}/source/problems/39.c"
    "${CMAKE_SOURCE_DIR}/source/problems/40.c"
    "${CMAKE_SOURCE_DIR}/source/problems/41.c"
    "${CMAKE_SOURCE_DIR}/source/problems/42.c"
    "${CMAKE_SOURCE_DIR}/source/problems/43.c"
    "${CMAKE_SOURCE_DIR}/source/problems/44.c"
    "${CMAKE_SOURCE_DIR}/source/problems/45.c"
    "${CMAKE_SOURCE_DIR}/source/problems/46.c"
)

include_directories(
    "${CMAKE_SOURCE_DIR}/source"
    "${CMAKE_SOURCE_DIR}/source/getDigits"
    "${CMAKE_SOURCE_DIR}/source/isPrime"
    "${CMAKE_SOURCE_DIR}/source/join"
)

add_executable(Euler ${MAIN_SOURCES})
if (${MINGW})
    set(CMAKE_C_FLAGS "-W -Wall -Wextra -Wshadow -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -std=c23 -D_UCRT")
    target_link_libraries(Euler -lucrt)
else ()
    set(CMAKE_C_FLAGS "-W -Wall -Wextra -Wshadow -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -std=c23")
endif ()