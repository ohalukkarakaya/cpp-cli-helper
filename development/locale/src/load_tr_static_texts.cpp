#include "../include/load_tr_static_texts.h"

std::unordered_map<std::string, std::string> load_tr_static_texts()
{
    std::unordered_map<std::string, std::string> tr_texts;

    // Add Static Texts To Here
    tr_texts["no_flag_found"] =
        "Ne istediğini söylemezsen sana yardımcı olamam. Bir komut girerek beni tekrar çalıştır :)";
    tr_texts["ask_for_project_name"] = "Proje Adı Girin: ";

    return tr_texts;
}
