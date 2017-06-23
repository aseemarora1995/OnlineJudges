class Solution {
public:
    void print(vector<int>& comb){
        if(comb.empty()){
            cout << "comb empty!\n";
            return;
        }
        for(int i=0; i<comb.size(); i++){
            cout <<  comb[i] << " ";
        }
        cout << endl;
    }
    
    bool findSum(vector<int>& candidates, int target,vector<int>& comb, vector<vector<int> >& res, set<vector<int> >& checkUnique){
        //cout << "target: " << target << endl;
        if(!target){
            vector<int> temp = comb;
            //cout << "--> ";
            //print(comb);
            sort(temp.begin(), temp.end());
            if(checkUnique.find(temp) == checkUnique.end()){
                //cout << "added!" << endl;
                res.push_back(temp);
                checkUnique.insert(temp);
                comb.pop_back();
            }
            else{
                comb.pop_back();
            }
            //print(comb);
            return true;
        }
        if(target < 0){
            //print(comb);
            comb.pop_back();
            //print(comb);
            return false;
        }
        for(int i=0; i<candidates.size(); i++){
            //cout << "two\n";
            //cout << "target: " << target << endl;
            comb.push_back(candidates[i]);
            //cout << candidates[i] << "  " << target << endl;
            bool t = findSum(candidates, target - candidates[i], comb, res, checkUnique);
            if(!t){
                //break;
                //continue;
            }
            /*if(t){
                // comb.push_back(candidates[i]);
                // return true;
            }*/
        }
        comb.pop_back();
        return false;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > res;
        //vector<int> comb;
        set<vector<int> > checkUnique;
        vector<int> comb;
        //sort(candidates.begin(), candidates.end()); // uncomment this line; change line 55 to true; uncomment line 46.
        for(int i=0; i<candidates.size(); i++){
            //cout << "target: " << target << endl;
            //cout << "one\n";
            
            comb.push_back(candidates[i]);
            //cout << candidates[i] << endl;
            //print(comb);
            bool t = findSum(candidates, target - candidates[i], comb, res, checkUnique);
            /*
            if(t){
                comb.push_back(candidates[i]);
                sort(comb.begin(), comb.end());
                if(checkUnique.find(comb) == checkUnique.end()){
                    res.push_back(comb);
                    checkUnique.insert(comb);
                }
                print(comb);
            }
            */
            //comb.clear();
            //comb.pop_back();
        }
        
        return res;
        
    }
};
