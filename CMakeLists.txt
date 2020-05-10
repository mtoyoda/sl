cmake_minimum_required(VERSION 3.6)
project("Steam Locamotive"
        VERSION 5.04
        DESCRIPTION "CHOO CHOO"
        LANGUAGES C)

find_package(PkgConfig REQUIRED)

pkg_check_modules(NCURSES REQUIRED ncurses)

add_executable(sl sl.c sl.h)
target_link_libraries(sl ${NCURSES_LIBRARIES})
target_include_directories(sl PUBLIC ${NCURSES_INCLUDE_DIRS})
target_compile_options(sl PUBLIC ${NCURSES_CFLAGS_OTHER})

install(TARGETS sl
        RUNTIME DESTINATION bin
        BUNDLE DESTINATION bin)