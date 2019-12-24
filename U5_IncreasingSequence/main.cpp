#include <iostream>
#include <vector>
using namespace std;
bool almostIncreasingSequence(std::vector<int> sequence) {

    int i = 0;
    bool result = true;
    int markIdx = 0;
    std::vector<int> tmp_sequence1 = sequence;
    std::vector<int> tmp_sequence2 = sequence;
    if(sequence.size() <= 2)
        return true;

    for (i = 0 ; i< sequence.size() - 1 ;i ++)
    {
        if(sequence.at(0) >= sequence.at(1))
        {
            tmp_sequence1.erase(tmp_sequence1.begin());
            tmp_sequence2.erase(tmp_sequence2.begin());
            break;
        }
        if(sequence.at(i) > sequence.at(i+1))
        {
            markIdx = i;
            tmp_sequence1.erase(tmp_sequence1.begin() + markIdx);
            tmp_sequence2.erase(tmp_sequence2.begin() + markIdx + 1);
            break;
        }
    }

    for(i = 0 ; i < tmp_sequence1.size() -1; i++)
    {
        if(tmp_sequence1.size() == 1)
            return true;
        if(tmp_sequence1.at(i) >= tmp_sequence1.at(i+1) )
        {
            result = false;
            break;
        }
        else
            result = true;
    }
    if(result == false)
    {
        for(i = 0 ; i < tmp_sequence2.size() -1; i++)
            {
                if(tmp_sequence2.size() == 1)
                    return true;
                if(tmp_sequence2.at(i) >= tmp_sequence2.at(i+1) )
            {
                result = false;
                break;
            }
            else
                result = true;
        }
    }

    return result;
}

int main()
{
    std::vector<int> sequence;
    sequence.push_back(123);
    sequence.push_back(-17);
    sequence.push_back(-5);
    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(5);
    sequence.push_back(6);
    bool res = almostIncreasingSequence(sequence) ;
    cout<< "Result is : "<<res<<endl;
    return 0;
}
