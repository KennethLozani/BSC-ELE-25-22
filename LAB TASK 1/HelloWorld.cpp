#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg {"Hello", "World", "from", "VS Code", "and the c++ extensions!"};
     for (const string& word : msg)
     {
        cout<<word<< " ";
     }
     cout<<endl;
}