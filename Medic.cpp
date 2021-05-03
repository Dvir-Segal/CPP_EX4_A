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
#include "City.hpp"
#include "Medic.hpp"
using namespace std;

namespace pandemic{
    string Medic::role(){
        return "Medic";
    }

    Medic& Medic::treat(){
        return *this;
    }
}

