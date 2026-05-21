class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString = "";
        for(auto &str : strs)
        {
            string temp = "";
            temp += to_string(str.length()) + "#" + str;
            encodedString += temp;
        }

        cout<<encodedString;

        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> stringList;
        int itr = 0;

        while(itr < s.length())
        {
            int lenItr = itr;
            int len = 0;
            while(s[lenItr] != '#')
            {
                len = len*10 + (s[lenItr] - '0');
                lenItr++;
            }

            cout<<"\n-----------------------\n";
            cout<<"itr: "<<itr<<" | len: "<<len<<endl;

            itr = lenItr+1;
            string temp = s.substr(itr, len);
            stringList.push_back(temp);
            itr += len;
        }

        return stringList;
    }

    int toString(string s){
        int res = 0;

    }
};
