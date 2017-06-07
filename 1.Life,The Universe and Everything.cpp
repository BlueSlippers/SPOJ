#import<vector>
#import<iostream>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    while(cin>>n)
    {
        v.push_back(n);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=42)
            cout<<v[i]<<endl;
        else
            break;
    }
}
