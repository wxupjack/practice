class Solution {
public
    vectorint topKFrequent(vectorint& nums, int k) {
        vectorint res(k,0);
        mapint,int table;
        for(auto inums){
            table[i]++;
        }
        
        mapint,intiterator it;
        int range=table.size();
        int maxCount=0, maxIndex=0;
        for(int i=0;ires.size();i++){
            for(it=table.begin();it!=table.end();it++){
                if(it-secondmaxCount){
                    maxCount=it-second;
                    maxIndex=it-first;
                }
            }
            res[i]=maxIndex;
            table.erase(maxIndex);
        cout.;
        }
    return res;
    }
};