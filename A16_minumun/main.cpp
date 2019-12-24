#include <iostream>
#include <vector>
using namespace std;
int minimumTime(int numOfParts, int* parts)
{
    // WRITE YOUR CODE HERE
    int i = 0, j = 0;
    int tmp = 0;
    int newItem = 0;
    int result = 0;
    std::vector<int>vector_parts;
    for(int i = 0 ; i < numOfParts; i++){
        vector_parts.push_back(*(parts+i));
    }
    while(numOfParts > 0){
        for(int i = 0 ; i < numOfParts-1; i++)
        {
            for(j = i+1; j < numOfParts ; j ++)
            {
                if(vector_parts[j] <= vector_parts[i])
                {
                    tmp = vector_parts[j];
                    vector_parts[j] = vector_parts[i];
                    vector_parts[i] = tmp;
                }
            }
        }
        newItem = vector_parts[0] + vector_parts[1];
        vector_parts.push_back( newItem);
        numOfParts--;
        vector_parts.erase(vector_parts.begin(), vector_parts.begin() + 2);
        result += newItem;
        if(numOfParts == 1)
            break;
    }
    return result;
}
// FUNCTION SIGNATURE ENDS
int main()
{
    int array[4] = {8,4,6,12};
    int num  = 4;
    int res =     minimumTime(num, array);
    cout << "Result: "<<res;
    return 0;
}
