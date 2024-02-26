class Solution{
    
	public:
	vector<string>ans;
	void f(string s , int i , string temp){
	    if(i==s.size()){
	        if(temp.size()!=0){
	            ans.push_back(temp);
	          
	        }
	          return;
	    }
	    f(s , i+1 , temp+s[i]);
	    f(s , i+1 , temp);
	    
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    f(s , 0 ,"");
		    sort(ans.begin() , ans.end());
		    return ans;
		}
};
