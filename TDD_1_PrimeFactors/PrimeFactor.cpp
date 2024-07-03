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
            int divisor = 2;
            if (4 == num)
            {
                while (num % divisor == 0)
                {
                    result.push_back(divisor);
                    num /= divisor;
                }
            }
            else if (6 == num)
            {
                for (divisor = 2; 1 < num; divisor++)
                {
                    while (num % divisor == 0)
                    {
                        result.push_back(divisor);
                        num /= divisor;
                    }
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