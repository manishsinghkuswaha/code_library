	  
/*
Time Complexity : O(n*n)
 Space Complexity : O(n)
*/

void sortedInsert(stack<int> &s, int elt){
    if(s.empty() || elt > s.top()){
        s.push(elt);
    
        return;
    }
        int temp  = s.top();
        s.pop();
        sortedInsert(s, elt);
        s.push(temp);
       

}

void sortStack(stack<int> &s){
    if(!s.empty()){
       int temp = s.top();
       s.pop();
       sortStack(s);
       sortedInsert(s, temp);
   }
}

void SortedStack :: sort()
{
    sortStack(s);
   
}

//Approach 2: Easy and Intutive using temporary stack.
// Time Complexity : O(n*n)
// Space Complexity : O(n)

stack<int> st, tmp;

void sortStack(){
	while(!st.empty()){
	      int x = st.top();
	      st.pop();
	      while(!tmp.empty() && tmp.top() > x){
         		st.push(tmp.top());
	        	tmp.pop();
	      }
	      tmp.push(x);
	}
}	


