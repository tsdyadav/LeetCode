class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>q1;
      
        int sum=0;
        for(auto op : operations)
        {
           
            
               if(op=="C")
               {q1.pop();
               }
               else if(op=="D")
                {
                    q1.push( q1.top()*2);
                  
                }
              else if(op=="+")
               {
                  int a = q1.top(); 
                    q1.pop();
                
                int b = q1.top();

                     q1.push(a);
                q1.push(a + b);
               }
               else
               q1.push(stoi(op));

            
        }
        while(q1.size()!=0)
        {
            sum+=q1.top();
            q1.pop();
        }
        return sum;

    }
};