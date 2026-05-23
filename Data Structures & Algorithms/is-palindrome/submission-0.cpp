class Solution {
public:
    bool isPalindrome(string s) {
        processString(s);
        cout<<s<<endl;
        return areCharsEqual(s, 0, s.length()-1);
    }

    void processString(string &s)
    {
        string res = "";
        for(auto ch : s)
        {
            if(isalnum(ch))
            {
                res += (char)tolower(ch);
            }
        }
        s = res;
    }

    bool areCharsEqual(string &s, int left, int right)
    {
        cout<<"Left("<<s[left]<<"): "<<left<<" | right("<<s[right]<<"): "<<right<<endl;
        if(left >= right) return true;
        if(s[left] != s[right]) return false;
        return areCharsEqual(s, ++left, --right);
    }
};
