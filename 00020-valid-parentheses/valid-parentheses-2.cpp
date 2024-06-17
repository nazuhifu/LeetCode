class Solution
{
public:
    bool isValid(string str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str.length() == 1)
            {
                return false;
            }
            else if (str[i] == ')' && i > 0)
            {
                if (str[i - 1] == '(')
                {
                    str.erase(i - 1, 2);
                    i -= 2;
                    if (i + 1 > str.length() - 1)
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            else if (str[i] == ']' && i > 0)
            {
                if (str[i - 1] == '[')
                {
                    str.erase(i - 1, 2);
                    i -= 2;
                    if (i + 1 > str.length() - 1)
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            else if (str[i] == '}' && i > 0)
            {
                if (str[i - 1] == '{')
                {
                    str.erase(i - 1, 2);
                    i -= 2;
                    if (i + 1 > str.length() - 1)
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
        }

        return str.empty();
    }
};
