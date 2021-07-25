/*
No sorting bcoz order of occurrence is important

Naive Approach:
Find all possible substrings (consequtive) and check for those with equal number of 0s and 1s

TC = O(n^2)
SC = O(1)

My approach: SEE the code 

TC = O(n)
SC = O(1)
*/

#include<iostream>

using namespace std;

int maxSubStr(string str,int n)
{
	int ans_count=0,cnt0=0,cnt1=0;
	
	for(int i=0;i<str.length();i++)
	{
		if(str.at(i)=='0')
		{
			cnt0++;
		}
		else if(str.at(i)=='1')
		{
			cnt1++;
		}
		
		if(cnt0==cnt1)
		{
			ans_count++;
		}
	}
	
	return (ans_count==0)? -1:ans_count;
}

int main()
{
	string str = "0111100010";
    int n = str.length();
 
    cout << maxSubStr(str, n);
	
	return 0;
}
