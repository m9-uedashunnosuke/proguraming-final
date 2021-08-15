#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct Student {
    string name; int math; int english; int science;
    int total = math + english + science;
    Student(const string& newName,int newMath, int newEnglish, int newScience) : name(newName), math(newMath), english(newEnglish), science(newScience) {}
};

int n = 1;
bool operator<(const Student& p1, const Student& p2) {
    if (n % 2 == 1) return p1.total > p2.total;
    else return p1.english > p2.english;
}

    void showscore(vector<Student>&v, bool b) {
    vector<Student> v1;
    v.emplace_back("上田", 50, 95, 90);
    v.emplace_back("中田", 95, 79, 70);
    v.emplace_back("下田", 78, 70, 62);
 
    sort(v.begin(), v.end());
}

int main() {
    vector<Student> v1;
    showscore(v1, true);
    for (auto p : v1) {
        cout << p.name << " : " << p.total << "点" << endl;
    };
   
}
