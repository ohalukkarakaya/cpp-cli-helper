#include "../include/locale.h"

// LocaleHelper yapıcı fonksiyonu
LocaleHelper::LocaleHelper()
{
    tr_static_texts = load_tr_static_texts(); // Türkçe metinleri yükle
    en_static_texts = load_en_static_texts(); // İngilizce metinleri yükle
}

// Anahtar kullanarak uygun dilde değeri döndüren fonksiyon
std::string LocaleHelper::get_locale_value(const std::string key)
{
    std::string lang_code = get_locale_lang_code();

    if (lang_code == "tr")
    {
        return tr_static_texts[key];
    }
    else
    {
        return en_static_texts[key];
    }
}

// Locale dil kodunu alan fonksiyon
std::string LocaleHelper::get_locale_lang_code()
{
    std::string locale_name = std::getenv("LANG");

    bool isTurkish = locale_name.find("tr") != std::string::npos && locale_name.find("TR") != std::string::npos;
    std::string language_code = isTurkish ? "tr" : "en";

    return language_code;
}
