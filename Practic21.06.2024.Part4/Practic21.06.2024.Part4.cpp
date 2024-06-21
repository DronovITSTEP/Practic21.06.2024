#include <iostream>
#include <map>
#include <string>

using namespace std;

void show(map<string, int> col) {
    for (map<string, int>::iterator iter = col.begin();
        iter != col.end(); iter++) {
        cout << "key -> " << iter->first << ", value -> " 
            << iter->second << endl;
    }
    cout << endl;
}
void show(multimap<string, int> col) {
    for (multimap<string, int>::iterator iter = col.begin();
        iter != col.end(); iter++) {
        cout << "key -> " << iter->first << ", value -> " 
            << iter->second << endl;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    map<string, int> cont;
    multimap<string, int> multicont;

    cont.insert(pair<string, int>("Ivanov", 10));
    cont.insert(pair<string, int>("Petrov", 24));
    show(cont);
    cont["Sidorov"] = 35;
    cont["Ivanov"] = 40;
    show(cont);
    cont.insert(pair<string, int>("Ivanov", 10));
    show(cont);
    cout << "-------------------------------\n\n";
    multicont.insert(pair<string, int>("Ivanov", 10));
    multicont.insert(pair<string, int>("Petrov", 24));
    multicont.insert(pair<string, int>("Sidorov", 35));
    show(multicont);
    //multicont["Sidorov"] = 33; - Error
    multicont.insert(pair<string, int>("Ivanov", 100));
    show(multicont);

    cout << multicont.count("Ivanov") << endl;

    multimap<string, int>::iterator iter = multicont.find("Petrov");

    cout << iter->first << " " << iter->second << endl;
    
}
