#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    vector<int>  vect;
    cout << "Сколько можно внести элементов,\nбез дополнительного увеличения "
        << "памяти: " << vect.capacity() << endl;
    cout << "Сколько элементов в векторе: " << vect.size() << endl;
    vect.resize(4, 0);
    cout << "Сколько элементов в векторе после resize: " << vect.size() << endl;

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;

    cout << "Максимальное кол-во элементов\n может содеражть в себе вектор: "
        << vect.max_size() << endl;

    vect.push_back(2);

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator rIter = vect.rbegin();
    for (int i = 0; i < vect.size(); i++) {
        cout << *(rIter + i) << " ";
    }
    cout << endl;

    vector<int>::iterator iter = vect.end();
    vect.insert(iter - 1, 5);

    for (iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    iter = vect.end();
    vect.insert(iter - 1, 3, 4);

    for (int item : vect) {      
        cout << item << " ";
    }
    cout << endl;
}
