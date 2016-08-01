#include <iostream>
using namespace std;
char matrix[100][100];

bool isvaild(int x, int y, int size)
{
    int cnt = 0;
    if(x+1 < size && matrix[x+1][y] == '*')
        cnt++;
    if(x-1 >= 0 && matrix[x-1][y] == '*')
        cnt++;
    if(y+1 < size && matrix[x][y+1] == '*')
        cnt++;
    if(y-1 >= 0 && matrix[x][y-1] == '*')
        cnt++;
    if(cnt > 1) return false;
    return true;
}

int main()
{
    int linenum;
    cin >> linenum;
    for(int i = 0; i < linenum; i++)
    {
        int size;
        cin >> size;
        // initial
        for(int i = 0; i < size; i++)
            for(int j = 0; j < size; j++)
                matrix[i][j] = '.';

        int x = 0, y = 0, length = size;

        if(length == 1)
        {
            cout  << '*' << endl;
            return 0;
        }
        bool clockwise = true;
        while(length > 0)
        {
            if(clockwise)
            {
                // top-left to top-right
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x, y+i, size))
                        matrix[x][y+i] = '*';
                    else break;
                }
                // top-right to bottom-right
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+i, y+length-1, size))
                        matrix[x+i][y+length-1] = '*';
                    else break;
                }
                // bottom-right to bottom-left
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+length-1, y+length-1-i, size))
                        matrix[x+length-1][y+length-1-i] = '*';
                    else break;
                }
                // bottom-left to top-left
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+length-1-i, y, size))
                        matrix[x+length-1-i][y] = '*';
                    else break;
                }
                if(isvaild(x+2, y+1, size))
                    matrix[x+2][y+1] = '*';
                else break;
            }
            else
            {
                // top-left to bottom-left
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+i, y, size))
                        matrix[x+i][y] = '*';
                    else break;
                }
                // bottom-left to bottom-right
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+length-1, y+i, size))
                        matrix[x+length-1][y+i] = '*';
                    else break;
                }
                // bottom-right to top-right
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x+length-1-i, y+length-1, size))
                        matrix[x+length-1-i][y+length-1] = '*';
                    else break;
                }
                // top-right to top-left
                for(int i = 0; i < length; i++)
                {
                    if(isvaild(x, y+length-1-i, size))
                        matrix[x][y+length-1-i] = '*';
                    else break;
                }

                if(isvaild(x+1, y+2, size))
                    matrix[x+1][y+2] = '*';
                else break;
            }

            x += 2;
            y += 2;
            length -= 4;
            clockwise = !clockwise;
        }

        // output
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
                cout << matrix[i][j];
            cout << '\n';
        }
        cout << endl;
    }
    return 0;

}
