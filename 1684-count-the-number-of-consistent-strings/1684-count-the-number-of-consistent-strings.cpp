class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cntAll = 0;
        unordered_set<char> check;

        // set me push kro for checking.
        for(char ch: allowed){
            check.insert(ch);
        }

        // traverse kro words mei or find kro jh valid h 
        for(int i = 0; i < words.size(); i++){
            string x = words[i];

            // phle hie consistent maan lo
            bool valid= true;

            // hrr ek word in words mei hrr char prr iterate krke check krna h
            for(int j = 0; j < x.size(); j++){
                
                // agr koi char allowed mei nhi h toh next word in words prr move kr jao break krke else continue kro uss word ko check krna poora
                if(!check.count(x[j])){
                    valid = false;
                    break;
                }
            }
            if(valid) cntAll++;
        }
        return cntAll;
    }
};