#pragma once
#include <iostream>
#include "list.h"
#define N 15
using namespace std;
Stack Maze(int arr[N][N]);
Location checkplace(List& l, int arr[N][N], Location loc, Stack s);

