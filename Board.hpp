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
#include "City.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic{
    class Board{
         map<City, pair<Color, int>> cubesAndColors;
         static map<City, map<string, City>> connections;
         static map<string, Color> mapColors;
         static map<string, City> mapCities;
        

        public:
            Board();
            static void buildMapColors();
            static void buildMapCities();
            int& operator[](City c);
            friend ostream& operator<<(ostream& os, const Board& input);
            static bool is_clean();
            void remove_cures();
         
    };
}