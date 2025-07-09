#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    cin.ignore(); 
    
    stack<string> st;
    while (t--) {
        string s;
        getline(cin, s);
        if (s.substr(0, 3) == "cd ") {
            string path = s.substr(3);
            
            if (path[0] == '/') {
                while (!st.empty()) {
                    st.pop();
                }
                path = path.substr(1);
            }
            
            stringstream ss(path);
            string part;
            while (getline(ss, part, '/')) {
                if (!part.empty()) {
                    if(part == ".."){
                        st.pop();
                    }
                    else st.push(part);
                }
            }
        }
        else if (s == "pwd") {
            stack<string> temp = st;
            string result = "/";
            while (!temp.empty()) {
                result = "/" + temp.top() + result;
                temp.pop();
            }
            cout << result << endl;
        }

    }


    return 0;
}
