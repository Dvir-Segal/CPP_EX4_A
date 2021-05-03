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
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
using namespace std;

namespace pandemic{
    Player& Player::drive(City city){return *this;}
    Player& Player::fly_direct(City city){return *this;}
    Player& Player::fly_charter(City city){return *this;}
    Player& Player::fly_shuttle(City city){return *this;}
    Player& Player::build(){return *this;}
    Player& Player::discover_cure(Color color){return *this;}
    Player& Player::treat(City city){return *this;}
    string Player::role(){return "";}
    Player& Player::take_card(City city){return *this;}   
}
