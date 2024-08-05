#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionThree{
public:
	string destCity(vector<vector<string>>& paths){
		map<string,int> path;
		for(auto it: paths){
			path[it[0]]++;
			path[it[1]]=path[it[1]];
		}
		for(auto node: path){
			if(!node.second){
				return node.first;
			}
		}
		return "";
	}
};

#endif // SOLUTION_THREE_HPP
