class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort( people.begin(), people.end());
        int st=0,end=people.size()-1;
        int count=0;
        while(st<=end)
        {
            if(people[st]+people[end]>limit)
            end--;
            else
            {
                st++;
                end--;
            }
            count++;
        }
        return count;
    }
};