#include <bits/stdc++.h>
#include <string>

using namespace std;

int valleys(int steps,string path){
    int level;
    int Valleys;
    for(char step:path){
        if(step == 'U'){
            level++;
        }
        if(step == 'D'){
            level--;
        }
        if(level == 0 && step == 'U'){  //Valley has to end at the top i.e by U
            Valleys++;
        }
    }
}

int main(){
    int steps;
    string path;
    cin>>steps>>path;
    cout<<valleys(steps,path);
    return 0;
}