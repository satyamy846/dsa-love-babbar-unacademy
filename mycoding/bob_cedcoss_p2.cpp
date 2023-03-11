// Header Files
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> stateOfCells (vector<int> cell, int days)
{
    vector<int>  answer;
    // Write your code here
    while(days--){
        for(int i=0;i<8;i++){
            int left=0,right=0;
            if(i==0){
                left=0;
                right=cell[i+1];
            }
            else if(i==7){
                left=cell[i-1];
                right=0;
            }
            else{
                left = cell[i-1];
                right = cell[i+1];
            }
            answer[i]=left^right;
            }
	

    
    return answer;
}

int main()
{
    
	//input for cell
	int cell_size;
	cin >> cell_size;
	vector<int> cell;
	for ( int idx = 0; idx < cell_size; idx++ )
	{
		int temp;
		cin >> temp;
		cell.push_back(temp);
	}
	//input for days
	int days;
	cin >> days;
	
	
    //output
	vector<int> result = stateOfCells(cell, days);
	for ( int idx = 0; idx < result.size() - 1; idx++ )
	{
		cout << result[idx] << " ";
	}
	cout<<result[result.size() - 1];
}