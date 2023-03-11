vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector <int> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    ans.push_back(arr[i]);
                }
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
        }
        
        return ans;
    }