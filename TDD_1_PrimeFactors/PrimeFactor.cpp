#include <vector>

using namespace std;

class PrimeFactor
{
public:
    vector<int> of(int num)
    {
        vector<int> result = { };

        if (num > 1)
        {
            if (4 == num)
            {
                while (num % 2 == 0)
                {
                    result.push_back(2);
                    num /= 2;
                }
            }
            else
            {
                result.push_back(num);
            }
        }

        return result;
    }
};