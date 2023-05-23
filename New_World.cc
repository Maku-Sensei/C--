#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string option, voc_name;
    vector<string> voc_list;

    cout << "Voc train\n";
    cout << "Please select a option \n";
    cout << "(1) add vocabulary \n";
    cout << "(2) execture trainee \n";
    getline(cin, option); // cin stands for character in, while cout stands for character out

    if (option == "1")
    {
        cout << "Please enter a vocabulary\n";
        getline(cin, voc_name);
        voc_list.push_back(voc_name);
        main();
    }
    else if (option == "2")
    {
        for (int i = 0; i < voc_list.size();)
    {
        std::cout << voc_list.at(i) << ' ';
    }
    }
    else
    {
        cout << "Please enter 1 or 2";
    }

    return 0;
}
