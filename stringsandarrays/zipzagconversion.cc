#include "../lib/basic.h"

string convert(string s, int numRows) {
    if(numRows==1)
        return s;
    int level=0;
    bool flag= true;
    string lvlArray[numRows];
    for(int i=0;i<numRows;i++)
        lvlArray[i]="";

    for(int i=0;i<s.length();i++){
        lvlArray[level]+=s[i];

        if(level==0){
            flag=true;
        }
        if(level==numRows-1){
            flag=false;
        }

        if(flag==true){
            level++;
        }else{
            level--;
        }
    }

    string ret="";
    for(int i=0;i<numRows;i++){
        ret+=lvlArray[i];
    }
    return ret;
}
