#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    map<int, int> myMap;
    vector<int> myVect;

    cout << "Маскимальное кол-во элементв в векторе: "
        << myVect.max_size() / sizeof(int) << endl;
    cout << "Маскимальное кол-во элементв в словарь: "
        << myMap.max_size() / sizeof(int) << endl;

    int val, key;
    cin >> key >> val;

    pair<int, int> element(key, val);

    myMap.insert(element);
    cout << "Кол-во элементов в словаре: " << myMap.size() << endl;
    
    cin >> key >> val;
    pair<map<int, int>::iterator, bool> err =
        myMap.insert(make_pair(key, val));

    if (err.second == false) {
        cout << "Error!\n";
    }
    cout << "Кол-во элементов в словаре: " << myMap.size() << endl;

    map<int, int>::iterator iter = myMap.begin();
    for (; iter != myMap.end(); iter++) {
        cout << "Ключ-> " << iter->first << ". Значение-> " << iter->second << endl;
    }


}

