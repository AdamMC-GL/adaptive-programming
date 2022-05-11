## adaptive-programming
Pull de gehele folder en run de main file om de output te verkijgen. Zorg dat de CMakeLists.txt ook in de folder bestaat, hier in staat welke files gedraait moeten worden.
De make file zou als volgt eruit moeten zien:

    cmake_minimum_required(VERSION 3.21)
    project(gameauto)

    set(CMAKE_CXX_STANDARD 20)
    include_directories(gameauto)
    set(PROJECT_HEADERS
            gameshop/gameshop.hpp
            autoverhuur/autoverhuur.hpp
            )
    add_executable(gameauto
            gameshop/gameshop.cpp
            autoverhuur/main.cpp
            autoverhuur/autoverhuur.cpp)

# gameshop/main.cpp
De main c++ file van het project, dit is de file dat gedraait moet worden om de output te verkrijgen. De uitput zou als volgt moeten eruit zien:

    p1 buys g1: Success
    p1 buys g2: Success
    p1 buys g3: Failed
    p2 buys g2: Success
    p2 buys g1: Failed
    p2 buys g3: Success

    Eric's budget is 142.4,- and owns:
    Just Cause 3, released 2021 original price: 49.98,- now: 34.98,-
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-

    Hans's budget is 32.46,- and owns:
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-

    Arno's budget is 162.4,- and owns:
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-

    p1 sells g1 to p3: Success
    p2 sells g2 to p3: Failed
    p2 sells g1 to p1: Failed

    Eric's budget is 177.4,- and owns:
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-

    Hans's budget is 32.46,- and owns:
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-

    Arno's budget is 127.4,- and owns:
    Need for Speed: Rivals, released 2020 original price: 45.99,- now: 22.53,-
    Just Cause 3, released 2021 original price: 49.98,- now: 34.98,-


    Process finished with exit code 0

# gameshop/gameshop.cpp
De cpp file waar alle code in staat, bekijk deze file om te zien hoe de opdracht is gemaakt.

# gameshop/gameshop.hpp
Bevat de header file van het project.

