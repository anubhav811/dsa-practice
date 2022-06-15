class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> main;
         
        for(int i = 0 ; i < numRows ; i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                    row[j]=main[i-1][j-1]+main[i-1][j];
                }                
            main.push_back(row);
        }
        
        return main;    
    }
};
        