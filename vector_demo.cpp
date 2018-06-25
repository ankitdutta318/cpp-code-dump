#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class AnimalNumber {
private:
    int my_num;
public:
    AnimalNumber(int x) {
        this->my_num = x;
    }
};

int main() {
//    vector<AnimalNumber> v;
//    AnimalNumber an1(5);
//    AnimalNumber an2(10);
//    v.push_back(an1);
//    v.push_back(an2);
//    v.erase(v.begin()+1);   // erases an2 since it has index 1




// ----------------------------for deleting a series of consecutive elements-------------------------------------------

//    vector<AnimalNumber> v(100, AnimalNumber(10));
//    v.erase(v.begin(), v.begin()+50);     // erase elements from index 1 to 50
//    cout  << v.size() << endl;



// --------------------------------------Sort a vector using C++ sort function-------------------------------------------

//    vector<int> v;
//    for(int i=10; i>=0; --i){
//        v.push_back(i);
//    }
//    cout << "Before Sorting: \n";
//    for(int i=0; i<v.size() ; ++i){
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    cout << "After Sorting: \n";
//
//    sort(v.begin(), v.end());
//
//    for(int i=0; i<v.size(); ++i){
//        cout << v[i] << " ";
//    }



// ---------------------------------------------Sorting in descending order--------------------------------------------

    class comparator {
    public:
        bool operator()(const int& lhs, const int& rhs) {
            return lhs > rhs;
        }
    };

    vector<int> v;
    for(int i=0; i<10; ++i) {
        v.push_back(i+1);
    }
    cout << "Before Sorting: \n";
    for(int i=0; i<v.size(); ++i) {
        cout << v[i] << " " ;
    }
    cout << endl;
    cout << "After Sorting: \n";

    sort(v.begin(), v.end(), comparator());

    for(int i=0; i<v.size(); ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
