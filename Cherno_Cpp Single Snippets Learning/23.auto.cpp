#include <iostream>
#include <map>
#include <vector>
#include <string>

class Tip {};

class TipManager {

private:
    std::map <std::vector<int>, Tip*> mp;
    
public:
    const std::map <std::vector<int>, Tip*>& GetMp() const {

        return mp;

    }
        
};

int main() {

    std::vector <std::string> vt;
    vt.push_back("Apple");
    vt.push_back("Orange");

    for (auto it = vt.begin(); it != vt.end(); it++) {

        std::cout << *it;

    }

    for(const auto& it : vt) {

        std::cout << it;

    }

    TipManager tipManager;
    using TipMap = std::map <std::vector<int>, Tip*> ;
    const TipMap& tipMap0 = tipManager.GetMp();

    const auto& tipMap1 = tipManager.GetMp();

}

