#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v{0,1,2,1,2,1,2};
    vector<int>::iterator iter=remove(v.begin(),v.end(),2);
    cout<<"The remove pointer points at "<<*iter<<endl;
    for(auto iter2=v.begin();iter2!=iter;++iter2)
        cout<<*iter2<<' ';

    cout<<endl<<"------------------"<<endl;

    for(auto &it:v) cout<<it<<' ';
    cout<<endl;

    return 0;
}
