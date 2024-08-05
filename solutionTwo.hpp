#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionTwo{
public:
	vector<int> frequencySort(vector<int> nums){
		unordered_map<int,int> freq;
		for(int num: nums){
			freq[num]++;
		}
		sort(nums.begin(), nums.end(), [&](int n1, int n2){
			if(freq[n1] != freq[n2]){
				return freq[n1] < freq[n2];
			}else{
				return n2<n1;
			}
		});
		return nums;
	}
};

#endif // SOLUTION_TWO_HPP