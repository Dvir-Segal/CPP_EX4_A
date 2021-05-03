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
#include <queue>
#include "Board.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic{

    map<City, map<string, City>> Board::connections;
    map<string, Color> Board::mapColors;
    map<string, City> Board::mapCities;

    void Board::buildMapColors(){
        mapColors["Red"] = Color::Red;
        mapColors["Yellow"] = Color::Yellow;
        mapColors["Blue"] = Color::Blue;
        mapColors["Black"] = Color::Black;
    }

    void Board::buildMapCities(){
        mapCities["Algiers"] = City::Algiers;
        mapCities["Atlanta"] = City::Atlanta;
        mapCities["Baghdad"] = City::Baghdad;
        mapCities["Bangkok"] = City::Bangkok;
        mapCities["Beijing"] = City::Beijing;
        mapCities["Bogota"] = City::Bogota;
        mapCities["BuenosAires"] = City::BuenosAires;
        mapCities["Cairo"] = City::Cairo;
        mapCities["Chennai"] = City::Chennai;
        mapCities["Chicago"] = City::Chicago;
        mapCities["Delhi"] = City::Delhi;
        mapCities["Essen"] = City::Essen;
        mapCities["HoChiMinhCity"] = City::HoChiMinhCity;
        mapCities["HongKong"] = City::HongKong;
        mapCities["Istanbul"] = City::Istanbul;
        mapCities["Jakarta"] = City::Jakarta;
        mapCities["Johannesburg"] = City::Johannesburg;
        mapCities["Karachi"] = City::Karachi;
        mapCities["Khartoum"] = City::Khartoum;
        mapCities["Kinshasa"] = City::Kinshasa;
        mapCities["Kolkata"] = City::Kolkata;
        mapCities["Lagos"] = City::Lagos;
        mapCities["Lima"] = City::Lima;
        mapCities["London"] = City::London;
        mapCities["LosAngeles"] = City::LosAngeles;
        mapCities["Madrid"] = City::Madrid;
        mapCities["Manila"] = City::Manila;
        mapCities["MexicoCity"] = City::MexicoCity;
        mapCities["Miami"] = City::Miami;
        mapCities["Milan"] = City::Milan;
        mapCities["Montreal"] = City::Montreal;
        mapCities["Moscow"] = City::Moscow;
        mapCities["Mumbai"] = City::Mumbai;
        mapCities["NewYork"] = City::NewYork;
        mapCities["Osaka"] = City::Osaka;
        mapCities["Paris"] = City::Paris;
        mapCities["Riyadh"] = City::Riyadh;
        mapCities["SanFrancisco"] = City::SanFrancisco;
        mapCities["Santiago"] = City::Santiago;
        mapCities["SaoPaulo"] = City::SaoPaulo;
        mapCities["Seoul"] = City::Seoul;
        mapCities["Shanghai"] = City::Shanghai;
        mapCities["StPetersburg"] = City::StPetersburg;
        mapCities["Sydney"] = City::Sydney;
        mapCities["Taipei"] = City::Taipei;
        mapCities["Tehran"] = City::Tehran;
        mapCities["Tokyo"] = City::Tokyo;
        mapCities["Washington"] = City::Washington;
    }

    Board::Board(){
        buildMapColors();
        buildMapCities();
        ifstream cities_map{"cities_map.txt"};
        ifstream& file = cities_map;
        string line;
        string city;
        string color;
        while (getline(file, line)){
            istringstream istr(line);
            istr >> city;
            istr >> color;
            cubesAndColors[mapCities[city]].first = mapColors[color];
            cubesAndColors[mapCities[city]].second = 0;
            while (istr >> city){
                connections[mapCities[city]][city] = mapCities[city];
            }    
        }
    }
    
    int& Board::operator[](City city){
        return cubesAndColors[city].second;
    }

    bool Board::is_clean(){
        return true;
    }

    ostream& operator<<(ostream& os, const Board& input){
        return os;
    }

    void Board::remove_cures(){
    }
}

