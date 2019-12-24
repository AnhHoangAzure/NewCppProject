#include <iostream>
#include <vector>

using namespace std;
int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int days = 0;
    int dailyHeight = 0;
    while(true){
        days++;
        dailyHeight = dailyHeight + upSpeed;
        if(dailyHeight < desiredHeight) //after a day
            dailyHeight = dailyHeight - downSpeed;//After a night
        else
            break;
    }
    return days;
}
int main()
{
    int res = 0;
    res = growingPlant(100, 10, 910);
    cout << "days = "<<res << endl;
    return 0;
}
