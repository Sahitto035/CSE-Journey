#include <iostream>
using namespace std;

class Array
{
private:
    int isize, jsize;
    int *p;

public:
    Array(int i, int j){
        p = new int[i * j];

        if (!p)
        {
            cout << "Allocation error\n";
            exit(1);
        }

        isize = i;
        jsize = j;
    }
    int &put(int i, int j){
        if (i < 0 || i >= isize || j < 0 || j >= jsize)
        {
            cout << "Bounds error!!!" << endl;
            exit(1);
        }

        return p[i * jsize + j];
    }

    int get(int i, int j){
        if (i < 0 || i >= isize || j < 0 || j >= jsize)
        {
            cout << "Bounds error!!!" << endl;;
            exit(1);
        }

        return p[i * jsize + j];
    }
};

int main()
{
    Array a(2, 3);
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            a.put(i, j) = i * j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            cout << a.get(i, j) << " ";

    a.put(10, 10);

    return 0;
}