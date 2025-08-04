class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int first,second;
        priority_queue<int>pq;
        for(int i : stones)
        {
            pq.push(i);
        }

        
        while(pq.size()>1)
        {
         first=pq.top();
        pq.pop();
        second=pq.top();
        pq.pop();


        if(first!=second)
            pq.push(first-second);
        

        }
        return pq.empty() ? 0: pq.top();
    }
};