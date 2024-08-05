#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"

using namespace std;

int main(){
 	Solution solution;
 	string rings="B0B6G0R6R0R6G9";
 	int output=solution.countPoints(rings);
 	cout<<"ANSWER = "<<output<<endl;

 	SolutionOne solution1;
 	vector<int> nums={1,2,3,2};
 	int outputOne=solution1.sumOfUnique(nums);
 	cout<<"ANSWER ONE= "<<outputOne<<endl;

 	SolutionTwo solution2;
 	vector<int> nums2={1,1,2,2,2,3};
 	vector<int> outputTwo=solution2.frequencySort(nums2);
 	cout<<"ANSWER TWO= "<<endl;
 	for(int i=0; i<outputTwo.size(); i++){
 		cout<<outputTwo[i]<<endl;
 	}

 	SolutionThree solution3;
 	vector<vector<string>> paths={{"B","C"},{"D","B"},{"C","A"}};
 	string outputThree=solution3.destCity(paths);
 	cout<<"ANSWER THREE= "<<outputThree<<endl;

 	return 0;
 }
