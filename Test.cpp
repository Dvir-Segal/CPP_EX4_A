#include "Board.hpp"
#include "City.hpp"
#include "doctest.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace pandemic;
using namespace std;

TEST_CASE("cubes in cities"){
    Board board;
    CHECK(board[City::Madrid] == 0);
    CHECK(board[City::London] == 0);
    CHECK(board[City::Lima] == 0);
    CHECK(board[City::Paris] == 0);
    CHECK(board[City::Baghdad] == 0);
    CHECK(board[City::Washington] == 0);
    CHECK(board[City::Taipei] == 0);
    CHECK(board[City::Tokyo] == 0);
    CHECK(board[City::Algiers] == 0);
    CHECK(board[City::Atlanta] == 0);
    CHECK(board[City::LosAngeles] == 0);
    CHECK(board[City::Baghdad] == 0);
    CHECK(board[City::BuenosAires] == 0);
    CHECK(board[City::Bogota] == 0);
    CHECK(board[City::Cairo] == 0);
    CHECK(board[City::Delhi] == 0);
    CHECK(board[City::Essen] == 0);
    CHECK(board[City::Chennai] == 0);
    CHECK(board[City::MexicoCity] == 0);
    CHECK(board[City::SanFrancisco] == 0);
}