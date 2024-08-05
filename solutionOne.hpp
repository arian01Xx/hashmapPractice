#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionOne{
public:
	int sumOfUnique(vector<int> nums){
		int n=nums.size();
		unordered_map<int,int> freq;
		for(int i=0; i<n; i++){
			freq[nums[i]]++; //la cantidad de veces que se repiten
		}
		int cnt=0;
		for(int i=0; i<n; i++){
			if(freq[nums[i]]==1){
				cnt+=nums[i];
			}
		}
		return cnt;
	}
};

#endif // SOLUTION_ONE_HPP