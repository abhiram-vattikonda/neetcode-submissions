class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();

        string enc = "";

        for (string str: strs)
        {
            enc += to_string(str.size()) + "#" + str;
        }

        cout<< "enc: "<<  enc;
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        string n = "";
        int i = 0;
        while(i < s.size())
        {
            string n = "";
            while(s[i] != '#')
            {
                n += s[i++];
            }   
            int count = stoi(n);
            i++;
            string word = "";
            for(int k = 0; k < count; k++)
            {
                word += s[i++];
            }
            dec.push_back(word);
        }
        return dec;
    }
};
