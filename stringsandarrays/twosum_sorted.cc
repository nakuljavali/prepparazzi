#include "../lib/basic.h"

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ret;
    int i=0, j=numbers.size()-1;

    while(i<j){
        if (numbers[i]+numbers[j] == target)
            break;
        if (numbers[i]+numbers[j] < target)
            i++;
        else
            j--;
    }
    ret.push_back(i+1);
    ret.push_back(j+1);
    return ret;
}

/*
int main()
{
    int a1[] = {2,7,11,15};
    vector<int> av1 (a1, a1 + sizeof(a1) / sizeof(int));

    twoSum(av1, 9);
}
*/
