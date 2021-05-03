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
#include "Dispatcher.hpp"
using namespace std;

namespace pandemic{
    string Dispatcher::role(){
        return "Dispatcher";
    }

    Dispatcher& Dispatcher::fly_direct(){
        return *this;
    }
}

