



void solve()
{
    string s;
    cin >> s;
    vector<int> temp(26, 0);
    for (auto x : s)
        temp[x - 'a']++;

    bool found = false;
    char temp1 = '1';
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        int x = temp[i];

        if (x % 2 != 0 && !found)
        {
            temp1 = i + 'a';
            found = true;
        }
        x = x / 2;
        while (x--)
        {
            res += i + 'a';
        }
    }

    if (found)
    {
        string res1 = res;
        res += temp1;
        reverse(res1.begin(), res1.end());
        res += res1;
    }
    else
    {
        string res1 = res;
        reverse(res1.begin(), res1.end());
        res += res1;
    }

    cout << res << "\n";
}

int main(){
    int tt; cin>>tt;
    while(tt--) solve();
}
