#include <string>
#include <map>


bool naoacertou(std::string palavrasecreta, std::map<char, bool> chutou) {
    for (char letra : palavrasecreta) {
        if (!chutou[letra]) {
            return true;
        }
    }
    return false;
}