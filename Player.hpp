#pragma once 
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <unordered_map>
#include <map>
#include <bits/stdc++.h>
#include <utility>
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
using namespace std;

namespace pandemic{
    class Player{
        protected:
            Board board;
            City city;

        public:
            Player(Board b, City c): board(b), city(c){};
            virtual Player& drive(City city);
            virtual Player& fly_direct(City city);
            virtual Player& fly_charter(City city);
            virtual Player& fly_shuttle(City city);
            virtual Player& build();
            virtual Player& discover_cure(Color color);
            virtual Player& treat(City city);
            virtual string role();
            virtual Player& take_card(City city);   
    };
}
