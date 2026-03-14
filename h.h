#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <limits>
#include <iomanip>
#include <algorithm>
#include <deque>
#include <list>


void inputfromkeyboard_deque(std::deque<int>& d);
void inputfromrandom_deque(std::deque<int>& d);
void inputfromfile_deque(std::deque<int>& d, const char* filename);
void inputfromkeyboard_list(std::list<int>& l);
void inputfromrandom_list(std::list<int>& l);
void inputfromfile_list(std::list<int>& l, const char* filename);
void inputfromkeyboard_vector(std::vector<int>& v);
void inputfromfile_vector(std::vector<int>& v, const char* filename);
void inputfromrandom_vector(std::vector<int>& v);
void STL2Seq7(std::deque<int>& d, std::vector<int>& v, std::list<int>& l);
void STL2Seq12(std::deque<int>& d, std::list<int>& l);
void STL2Seq24(std::list<int>& l1, std::list<int>& l2);
void STL1Iter15();
