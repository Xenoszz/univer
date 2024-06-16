#include <iostream>
#include <cmath>

using namespace std;

int main() {
string ID[34] = {
        "99999999999", "66090500403", "66090500439", "66090500441", "66090500401", "66090500437", "66090500445", "66090500433", "66090500420", "66090500423", "66090500431", "66090500408", "66090500421", "66090500428", "64090500005", "66090500446", "66090500404", "66090500418", "66090500422", "66090500412", "66090500449", "66090500409", "66090500415", "66090500406", "66090500424", "66090500436", "66090500414", "66090500450", "66090500413", "66090500417", "66090500430", "66090500442", "66090500419", "66090500443"
    };

    string Name[34] = {
        "Warin Wattanapornprom", "chanatip kwaechaoon", "Yodsaphat Kumwong", "Siwat Chotchong", "Janthima Janhom", "Nitipoom Phramsrichai", "Surasan Phothichak", "Tanyatorn Kongtonglang", "Sorawich Hongsopa", "Athitan Mahamon", "Nutgritta Prasomthongsuk", "Natthawat noiauthai", "Sittan Kunanit", "Jiratchaya Suwancheewasiri", "Teerapan Lueangkittikong", "Anukool Baiban", "Natthinan Kerdsri", "Watcharin Tadajetsombat", "Sukumpat Rujitanatroj", "Panwad Kabucha", "nutthawarara Sasrimuang", "Tonyok Buranawanich", "Mongkud Wathanasilapakit", "Natthapol Premkamon", "Amy Suganya Tripp", "Nichanun Boontanom", "Piriyakorn Srisook", "Napadech Kaewnok", "Pongsatorn Waiyaworn", "Watcharaphun Siriarkanay", "Thiraphat Panthong", "Suchakree panchorpom", "Wattanasuk Limchanyavong", "Suchanan Thongchanluk"
    };

    string Sex[34] = {
        "Male", "male", "male", "male", "female", "male", "Male", "female", "Male", "female", "female", "Male", "Female", "Female", "Male", "Male", "Male", "Male", "Male", "Female", "Female", "Female", "Male", "Female", "Male", "Male", "Male", "Male", "Male", "Female", "Male", "Male", "Male"
    };

    float data[34][9] = {
        {32, 32, 27, 36, 29, 31, 28, 23},
        {31.8, 33, 22, 30, 35, 26, 24, 23},
        {12.8, 15.6, 14, 29, 21, 20, 17, 17},
        {9.8, 14, 23, 23, 27, 30, 13, 25},
        {27.4, 30.4, 25, 25, 33, 28, 29, 19},
        {41.4, 31.8, 38, 42, 25, 36, 21, 39},
        {29.4, 36.4, 30, 34, 26, 28, 35, 29},
        {25.4, 20.4, 33, 30, 24, 32, 24, 17},
        {21.4, 20.4, 30, 31, 34, 30, 17, 22},
        {41, 30.4, 29, 45, 24, 42, 33, 31},
        {37, 37.4, 37, 30, 28, 40, 35, 29},
        {23.4, 27, 26, 25, 27, 30, 23, 20},
        {35.8, 35.6, 18, 23, 17, 32, 26, 22},
        {28.6, 21, 23, 24, 22, 26, 26, 13},
        {29.4, 39.4, 34, 42, 32, 31, 29, 29},
        {39.2, 34.6, 30, 23, 25, 28, 36, 23},
        {30, 18.4, 19, 31, 25, 31, 25, 15},
        {22.8, 27, 31, 33, 29, 35, 26, 22},
        {21.8, 26, 21, 34, 26, 25, 23, 22},
        {30.4, 38, 20, 30, 18, 29, 24, 14},
        {29.4, 28.6, 30, 31, 31, 34, 27, 25},
        {18.4, 26.6, 33, 38, 23, 41, 20, 24},
        {21, 29.4, 23, 36, 26, 32, 16, 27},
        {25.4, 26, 18, 28, 25, 23, 19, 23},
        {20, 14.8, 31, 37, 33, 17, 24, 27},
        {24.2, 25.6, 21, 26, 23, 28, 15, 21},
        {31.6, 29.4, 32, 21, 28, 33, 30, 21},
        {24.6, 32.2, 31, 39, 31, 35, 21, 29},
        {32.2, 38.8, 32, 36, 29, 35, 33, 30},
        {32, 32, 27, 36, 29, 31, 28, 23},
        {22, 36.8, 25, 28, 24, 35, 20, 32},
        {38, 37, 36, 38, 37, 36, 39, 36},
        {36.4, 33.4, 35, 35, 36, 36, 37, 25},
        {19.8, 25, 31, 35, 31, 30, 23, 21},
    };

    string Type[34] = {
        "INTP", "INTJ", "ISTJ", "ISTP", "ENFJ", "INTP", "INFJ", "ISTJ", "ISTP", "INTP", "ISTJ", "INFJ", "ISTP", "INTJ", "ENFJ", "INTP", "INTJ", "ISTJ", "ISTP", "INFJ", "ISTJ", "ENTP", "ISTP", "INFJ", "ENTP", "ISTJ", "ISTP", "ENTP", "ESFJ", "ISTP", "ENTP", "INFJ", "ISTJ", "ENTP"
    };

    string Enneagram[34] = {
        "5", "1", "9", "1", "1", "6", "6", "8", "7", "7", "2", "9", "9", "7", "7", "4", "9", "7", "6","9,5", "1,6", "9", "5", "9", "8", "1", "3", "1", "5", "5", "7", "5","7","1"
    };

    string Nick[34] = {
        "Aj.Yong", "Fluk", "Euro", "Nun", "Ploydao", "Phum", "Pui", "Net", "Num", "Dear", "Mymint", "Nut", "Mai", "Fern", "Jai", "Guy", "Safe", "Kong", "Palm", "Mute", "Ant", "Namsai", "Puay", "khawfang", "Amy", "Gift", "Opal", "Ohm", "Tee", "Bigboss", "Tae", "Tra", "Frank", "Mind"
    };

    float query[8] = {30,18.4,19,31,25,31,25,15};

    // เก็บระยะทางและ index ของประเภทที่ใกล้เคียงที่สุด 3 ประเภท
    float distances[3];
    int indices[3];

    for (int k = 0; k < 3; k++) {
        float minDistance = INFINITY;
        int minIndex = -1;

        for (int i = 0; i < 15; i++) {
            float distance = 0;
            for (int j = 0; j < 8; ++j) {
                distance += pow(data[i][j] - query[j], 2);
            }
            distance = sqrt(distance);

            if (distance < minDistance && i != indices[0] && i != indices[1] && i != indices[2]) {
                minDistance = distance;
                minIndex = i;
            }
        }

        distances[k] = minDistance;
        indices[k] = minIndex;
    }

    cout << "3 Nearest Neighbors:" << endl;
    for (int k = 0; k < 3; k++) {
        cout << "Personal ID: " << ID[indices[k]] << endl;
        cout << "Name: " << Name[indices[k]] << endl;
        cout << "Sex: " << Sex[indices[k]] << endl;
        cout << "Type: " << Type[indices[k]] << endl;
        cout << "Enneagram: " << Enneagram[indices[k]] << endl;
        cout << "Nickname: " << Nick[indices[k]] << endl;
        cout << "Distance: " << distances[k] << endl;
        cout << "--------------------" << endl; 
    }
    return 0;
}

