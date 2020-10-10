#include <iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;


int main() {
    stack < char > st ;
    string s ;
    cin>>s;
    for(int i=0 ;i <s.size() ; i++){
        char c = s[i] ;
        if(!st.empty()  && st.top() == c){
            st.pop() ;
        }
        else
        st.push(c);
    }
    string ans ="";
    while(!st.empty())
    {
        ans += st.top();
        st.pop() ;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;


    return 0;

}
