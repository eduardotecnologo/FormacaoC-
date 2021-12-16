#include <string>

std::string palavrasecreta;
std::map<char, bool> chutou;

bool naoacertou(){
    for(char letra : palavrasecreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}