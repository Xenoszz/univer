#include <iostream>
#include <cmath>
#include <string>
#include <limits>  

using namespace std;

struct Person {
    string personalId;
    string name;
    string sex;
    string type;
    float mbtiData[8]; // Ne, Ni, Te, Ti, Se, Si, Fe, Fi
    string nick;
};

int main() {
    // Sample data (replace with actual data)
    Person people[50] = {
        {"99999999999", "Warin Wattanapornprom", "Male", "INTP", {32, 32, 27, 36, 29, 31, 28, 23}, "Aj.Yong"},
        {"66090500403", "chanatip kwaechaoon", "male", "INTJ", {31.8, 33, 22, 30, 35, 26, 24, 23}, "Fluk"},
        {"66090500439", "Yodsaphat Kumwong", "male", "ISTJ", {12.8, 15.6, 14, 29, 21, 20, 17, 17}, "Euro"},
        {"66090500441", "Siwat Chotchong", "male", "ISTP", {9.8, 14, 23, 23, 27, 30, 13, 25}, "Nun"},
        {"66090500401", "Janthima Janhom", "female", "ENFJ", {27.4, 30.4, 25, 25, 33, 28, 29, 19}, "Ploydao"},
        {"66090500437", "Nitipoom Phramsrichai", "male", "INTP", {41.4, 31.8, 38, 42, 25, 36, 21, 39}, "Phum"},
        {"66090500445", "Surasan Phothichak", "Male", "INFJ", {29.4, 36.4, 30, 34, 26, 28, 35, 29}, "Pui"},
        {"66090500433", "Tanyatorn Kongtonglang", "female", "INFJ", {25.4, 20.4, 33, 30, 24, 32, 24, 17}, "Net"},
        {"66090500420", "Sorawich Hongsopa", "Male", "ISTP", {21.4, 20.4, 30, 31, 34, 30, 17, 22}, "Num"},
        {"66090500423", "Athitan Mahamon", "female", "INTP", {41, 30.4, 29, 45, 24, 42, 33, 31}, "Dear"},
        {"66090500431", "Nutgritta Prasomthongsuk", "female", "ISTJ", {37, 37.4, 37, 30, 28, 40, 35, 29}, "Mymint"},
        {"66090500408", "Natthawat noiauthai", "Male", "ISTP", {23.4, 27, 26, 25, 27, 30, 23, 20}, "Nut"},
        {"66090500421", "Sittan Kunanit", "Female", "INFJ", {35.8, 35.6, 18, 23, 17, 32, 26, 22}, "Mai"},
        {"66090500428", "Jiratchaya Suwancheewasiri", "Female", "ENTP", {28.6, 21, 23, 24, 22, 26, 26, 13}, "Fern"},
        {"64090500005", "Teerapan Lueangkittikong", "Male", "INTJ", {29.4, 39.4, 34, 42, 32, 31, 29, 29}, "Jai"},
        {"66090500446", "Anukool Baiban", "Male", "ENFJ", {39.2, 34.6, 30, 23, 25, 28, 36, 23}, "Guy"},
        {"66090500418", "Watcharin Tadajetsombat", "Male", "ISTJ", {22.8, 27, 31, 33, 29, 35, 26, 22}, "Kong"},
        {"66090500422", "Sukumpat Rujitanatroj", "Male", "ISTP", {21.8, 26, 21, 34, 26, 25, 23, 22}, "Palm"},
        {"66090500412", "Panwad Kabucha", "Female", "INFJ", {30.4, 38, 20, 30, 18, 29, 24, 14}, "Mute"},
        {"66090500449", "nutthawarara Sasrimuang", "Female", "ISTJ", {29.4, 28.6, 30, 31, 31, 34, 27, 25}, "Ant"},
        {"66090500409", "Tonyok Buranawanich", "Female", "ISTJ", {18.4, 26.6, 33, 38, 23, 41, 20, 24}, "Namsai"},
        {"66090500415", "Mongkud Wathanasilapakit", "Female", "ISTP", {21, 29.4, 23, 36, 26, 32, 16, 27}, "Puay"},
        {"66090500406", "Natthapol Premkamon", "Male", "ISTP", {25.4, 26, 18, 28, 25, 23, 19, 23}, "khawfang"},
        {"66090500424", "Amy Suganya Tripp", "Female", "ESTP", {20, 14.8, 31, 37, 33, 17, 24, 27}, "Amy"},
        {"66090500436", "Nichanun Boontanom", "Female", "ISTP", {24.2, 25.6, 21, 26, 23, 28, 15, 21}, "Gift"},
        {"66090500414", "Piriyakorn Srisook", "Female", "ENFJ", {31.6, 29.4, 32, 21, 28, 33, 30, 21}, "Opal"},
        {"66090500450", "Napadech Kaewnok", "Male", "ISTP", {24.6, 32.2, 31, 39, 31, 35, 21, 29}, "Ohm"},
        {"66090500413", "Pongsatorn Waiyaworn", "Male", "INTJ", {32.2, 38.8, 32, 36, 29, 35, 33, 30}, "Tee"},
        {"66090500417", "Watcharaphun Siriarkanay", "Male", "INFP", {32, 32, 27, 36, 29, 31, 28, 23}, "Bigboss"},
        {"66090500430", "Thiraphat Panthong", "Male", "ISTP", {22, 36.8, 25, 28, 24, 35, 20, 32}, "Tae"},
        {"66090500442", "Suchakree panchorpom", "Male", "ENTP", {38, 37, 36, 38, 37, 36, 39, 36}, "Tra"},
        {"66090500419", "Wattanasuk Limchanyavong", "Male", "ESFJ", {36.4, 33.4, 35, 35, 36, 36, 37, 25}, "Frank"},
        {"66090500443", "Suchanan Thongchanluk", "Female", "ISTJ", {19.8, 25, 31, 35, 31, 30, 23, 21}, "Mind"}

        };

    float query[8] = {30,18.4,19,31,25,31,25,15};

    float distances[3];
    int indices[3];

    // Find 3 nearest neighbors
    for (int k = 0; k < 3; k++) {
        float minDistance = numeric_limits<float>::infinity(); 
        int minIndex = -1;

        for (int i = 0; i < 15; i++) {
            if (i == indices[0] || i == indices[1] || i == indices[2]) {
                continue; 
            }

            float distance = 0;
            for (int j = 0; j < 8; ++j) {
                distance += pow(people[i].mbtiData[j] - query[j], 2);
            }
            distance = sqrt(distance);

            if (distance < minDistance) {
                minDistance = distance;
                minIndex = i;
            }
        }

        distances[k] = minDistance;
        indices[k] = minIndex;
    }

    cout << "3 Nearest Neighbors:" << endl;
    for (int k = 0; k < 3; k++) {
        cout << "Personal ID: " << people[indices[k]].personalId << endl;
        cout << "Name: " << people[indices[k]].name << endl;
        cout << "Sex: " << people[indices[k]].sex << endl;
        cout << "Type: " << people[indices[k]].type << endl;
        cout << "Distance: " << distances[k] << endl;
        cout << "--------------------" << endl; 
    }

    return 0;
}
