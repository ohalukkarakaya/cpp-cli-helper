#include "../include/load_tr_static_texts.h"

std::unordered_map<std::string, std::string> load_tr_static_texts()
{
    std::unordered_map<std::string, std::string> tr_texts;

    // Add Static Texts To Here
    tr_texts["no_flag_found"] =
        "Ne istediğini söylemezsen sana yardımcı olamam. Bir komut girerek beni tekrar çalıştır :)";
    tr_texts["ask_for_project_name"] = "Proje Adı Girin: ";
    tr_texts["error_copying_template_project"] = "Şablon projeyi kopyalarken hata oluştu: ";
    tr_texts["projec_created_succesfully"] = "Proje başarılı şekilde oluşturuldu";

    return tr_texts;
}
