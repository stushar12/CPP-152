#include <bits/stdc++.h>
using namespace std;
int binary(int start,int end,int target,vector<int> v)
{
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(v[mid]==target)
        return mid;
        else if(v[mid]>target)
        end=mid-1;
        else
        start=mid+1;
    }
return -1;
}


int main()
{
    vector<int> v{4,5,6,7,0,1,2};
    int target=0;
    auto itr=min_element(v.begin(),v.end());
    auto itr1=find(v.begin(),v.end(),*itr);
    auto itr2=itr1-v.begin();
    
    int x=binary(0,itr2-1,target,v);
    int y=binary(itr2,v.size()-1,target,v);

    if(x==y)
    cout<<-1;
    else if(x>y)
    cout<<x;
    else
    cout<<y;

}
