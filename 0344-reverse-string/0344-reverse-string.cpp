class Solution {
public:
    vector<char>a;
    void str(vector<char>&s,int index){
        if(index>=s.size()){
         return;
        }
        str(s,index+1);
        a.push_back(s[index]);
        
    }
    void reverseString(vector<char>& s) {
         str(s,0);
        for(int i=0;i<s.size();i++){
            s[i]=a[i];
        }
    }
};
