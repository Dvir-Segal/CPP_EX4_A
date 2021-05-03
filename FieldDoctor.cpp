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
#include "FieldDoctor.hpp"
using namespace std;

namespace pandemic{
    string FieldDoctor::role(){
        return "FieldDoctor";
    }

    FieldDoctor& FieldDoctor::treat(){
        return *this;
    }
}

