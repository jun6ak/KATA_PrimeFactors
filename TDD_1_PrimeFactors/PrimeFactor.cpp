#include <vector>

using namespace std;

class PrimeFactor
{
public:
    vector<int> of(int num)
    {
        vector<int> result = { };

        if (2 == num)
        {
            result.push_back(2);
        }

        if (3 == num)
        {
            result.push_back(3);
        }

        return result;
    }
};