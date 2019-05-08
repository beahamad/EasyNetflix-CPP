#include <stdio.h>
#include <iterator>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <bits/stdc++.h>

using namespace std;


vector<string> lista_categorias                         { "Acao", "Animacoes", "Documentarios",
                                                          "Filmes", "Esportes", "Classicos",
                                                          "Comedias", "Familia", "Dramas",
                                                          "Terror", "Musica", "Sci Fi",
                                                          "TV", "Thrillers", "Epicos",
                                                          "Minisseries", "Obras de Epoca", "Westerns"};
vector<string> lista_subcategorias                      { "anime", "regioes", "romances" };
string epicos =                                         "52858";
string minisserie =                                     "4814";
string obras_de_epoca =                                 "12123";
string westerns =                                       "7700";

map <string,string> acao() {
    map <string,string> acao_aventura;
    acao_aventura["Acao e Aventura"]                    = "1365";
    acao_aventura["Aventuras"]                          = "7442";
    acao_aventura["Acao e Aventura Estrangeira"]        = "11828";
    acao_aventura["Acao e Aventura Independentes"]      = "11804";
    acao_aventura["Acao e Aventura Militar"]            = "2125";
    acao_aventura["Acao e Aventura Spy"]                = "10702";
    acao_aventura["Acao e Aventura TV"]                 = "10673";
    acao_aventura["Crime, Acao e Aventura"]             = "9584";
    acao_aventura["Suspenses de Acao"]                  = "43048";
    return acao_aventura;
}

map <string,string> animacoes() {
    map <string,string> animacoes;
    animacoes["Animacoes para Adultos"]                 = "11881";
    animacoes["Disney"]                                 = "67673";
    animacoes["Anime"]                                  = "anime";
    animacoes["Cartoons TV"]                            = "11177";
    animacoes["TV Kids"]                                = "27346";
    animacoes["Contos Animais"]                         = "5507";
    return animacoes;
}

map <string,string> anime() {
    map <string,string> anime;
    anime["Anime"]                                      = "7424";
    anime["Anime de Acao"]                              = "2653";
    anime["Anime de Comedia"]                           = "9302";
    anime["Anime de Drama"]                             = "452";
    anime["Anime de Fantasia"]                          = "11146";
    anime["Anime de Ficcao Cientifica"]                 = "2729";
    anime["Anime de Horror"]                            = "10695";
    anime["Anime Series"]                               = "6721";
    anime["Atracoes do Anime"]                          = "3063";
    return anime;
}

map <string,string> documentarios() {
    map <string,string> docs;
    docs["Documentarios"]                               = "6839";
    docs["Documentarios TV"]                            = "10105";
    docs["Documentarios Religiosos"]                    = "10005";
    docs["Documentarios Politicos"]                     = "7018";
    docs["Documentarios Historicos"]                    = "5349";
    docs["Documentarios Estrangeiros"]                  = "5161";
    docs["Documentarios Espirituais"]                   = "2760";
    docs["Documentarios de Musica e shows"]             = "90361";
    docs["Documentarios de Crime"]                      = "9875";
    docs["Documentarios Biograficos"]                   = "3652";
    docs["Documentarios Armadas"]                       = "4006";
    docs["Ciencia e Natureza Documentarios"]            = "2595";
    docs["Ciencia e Natureza"]                          = "52780";
    docs["Viagens & Aventura em Documentarios"]         = "1159";
    docs["Sociais e Culturais (documentarios)"]         = "3675";
    docs["Mockumentaries"]                              = "26";
    return docs;
}

map <string,string> filmes(){
    map <string,string> filmes;
    filmes["Film Noir"]                                 = "7687";
    filmes["Filmes Baseados em Livros Infantis"]        = "10056";
    filmes["Filmes Cult"]                               = "7627";
    filmes["Filmes Independentes"]                      = "7077";
    filmes["Filmes Independentes Romanticos"]           = "9916";
    filmes["Filmes de Gangster"]                        = "31851";
    filmes["Filmes de Guerra Classicos"]                = "48744";
    filmes["Filmes Exagerados"]                         = "1252";
    filmes["Filmes Experimentais"]                      = "11079";
    filmes["Filmes Estrangeiros"]                       = "regioes";
    filmes["Filmes LGBT Estrangeiros"]                  = "8243";
    filmes["Filmes Mudos"]                              = "53310";
    filmes["Filmes Romanticos"]                         = "romances";
    filmes["Filmes de Artes Marciais"]                  = "8985";
    filmes["Filmes de Quadrinhos e Super-Herois"]       = "10118";
    filmes["Art House Filmes"]                          = "29764";
    return filmes;
}

map <string,string> filmes_romanticos() {
    map <string,string> romances;
    romances["Filmes Romanticos"]                       = "8883";
    romances["Filmes Romanticos Estrangeiros"]          = "7153";
    romances["Filmes Romanticos Picantes"]              = "35800";
    romances["Favoritos Romanticos"]                    = "502675";
    romances["Romantico Peculiar"]                      = "36103";
    return romances;
}

map <string,string> filmes_estrangeiros(){
    map <string,string> regioes;
    regioes["Filmes Estrangeiros"]                      = "7462";
    regioes["Filmes Africanos"]                         = "3761";
    regioes["Filmes Alemaes"]                           = "58886";
    regioes["Filmes Australianos"]                      = "5230";
    regioes["Filmes Belgas"]                            = "262";
    regioes["Filmes Britanicos"]                        = "10757";
    regioes["Filmes Chineses"]                          = "3960";
    regioes["Filmes Coreanos"]                          = "5685";
    regioes["Filmes de Acao Asiaticos"]                 = "77232";
    regioes["Filmes do Leste Europeu"]                  = "5254";
    regioes["Filmes do Oriente Medio"]                  = "5875";
    regioes["Filmes do Sudeste Asiatico"]               = "9196";
    regioes["Filmes Escandinavos"]                      = "9292";
    regioes["Filmes Espanhois"]                         = "58741";
    regioes["Filmes Franceses"]                         = "58807";
    regioes["Filmes Holandeses"]                        = "10606";
    regioes["Filmes Indianos"]                          = "10463";
    regioes["Filmes Irlandeses"]                        = "58750";
    regioes["Filmes Italianos"]                         = "8221";
    regioes["Filmes Japoneses"]                         = "10398";
    regioes["Filmes Latino-Americanos"]                 = "1613";
    regioes["Filmes Neozelandezes"]                     = "63782";
    regioes["Estrangeiros de Ficcao Cientifica"]        = "3327";
    regioes["Russia"] = "11567";
    return regioes;
}

map <string,string> esportes() {
    map <string,string> esportes;
    esportes["Filmes De Esportes"]                      = "4370";
    esportes["Documentarios Esportes"]                  = "180";
    esportes["Filmes de Basquete"]                      = "12762";
    esportes["Filmes de Basebol"]                       = "12339";
    esportes["Filmes de Boxe"]                          = "12443";
    esportes["Filmes de Futebol"]                       = "12549";
    esportes["Filmes de Futebol Americano"]             = "12803";
    esportes["Filmes de Artes Marciais, Boxe e luta"]   = "6695";
    esportes["Esportes Dramas"]                         = "7243";
    esportes["Sports & Fitness"]                        = "9327";
    return esportes;

}

map <string,string> terror() {
    map <string,string> terror;
    terror["Filmes de Terror"]                          = "8711";
    terror["Filmes de Terror B"]                        = "8195";
    terror["Filmes de Monstros"]                        = "947";
    terror["Filmes de Terror com Vampiros"]             = "75804";
    terror["Filmes de Terror com Zumbis"]               = "75405";
    terror["Filmes de Terror Cult"]                     = "10944";
    terror["Filmes de Terror com Lobisomens"]           = "75930";
    terror["Filmes de Terror Estrangeiros"]             = "8654";
    terror["Filmes de Terror no Fundo do Mar"]          = "45028";
    terror["Gritos Adolescentes"]                       = "52147";
    terror["Histórias Satanicas"]                       = "6998";
    terror["Horror TV"]                                 = "83059";
    terror["Criaturas e Monstros"]                      = "6895";
    terror["Misterios"]                                 = "9994";
    terror["Slasher e Serial Killers"]                  = "8646";
    terror["Sobrenaturais"]                             = "42023";
    terror["Thrillers Sobrenaturais"]                   = "11140";
    terror["TV Mysteries"]                              = "4366";
    return terror;
}

map <string,string> classicos() {
    map <string,string> classicos;
    classicos["Filmes Classicos"]                       = "31574";
    classicos["Filmes Classicos Romanticos"]            = "31273";
    classicos["Filmes Classicos Estrangeiros"]          = "32473";
    classicos["Filmes de Guerra Classicos"]             = "48744";
    classicos["Classicos Sci-Fi & Fantasy"]             = "47147";
    classicos["Classicos de Acao e Aventura"]           = "46576";
    classicos["Classicos Western"]                      = "47465";
    classicos["Dramas Clássicos"]                       = "29809";
    return classicos;
}

map <string,string> comedias(){
    map <string,string> comedias;
    comedias["Comedias"]                                = "6548";
    comedias["Comedias Romanticas"]                     = "5475";
    comedias["Comedias Adolescentes"]                   = "3519";
    comedias["Comedias Classicas"]                      = "31694";
    comedias["Comedias Cult"]                           = "9434";
    comedias["Comedias de Acao"]                        = "43040";
    comedias["Comedias de Terror"]                      = "89585";
    comedias["Comedias de TV"]                          = "10375";
    comedias["Comedias Esportivas"]                     = "5286";
    comedias["Comedias Estrangeiras"]                   = "4426";
    comedias["Comedias Independentes"]                  = "4195";
    comedias["Comedias Negras"]                         = "869";
    comedias["Comedias Politicas"]                      = "2700";
    comedias["Stand-up Comedy"]                         = "11559";
    comedias["Satiras"]                                 = "4922";
    comedias["Screwball Comedias"]                      = "9702";
    comedias["Pastelao Comedias"]                       = "10256";
    return comedias;
}

map <string,string> familia(){
    map <string,string> familia;
    familia["Familia"]                                  = "51056";
    familia["Filmes para as idades de 0 a 2"]           = "6796";
    familia["Filmes para as idades de 2 a 4"]           = "6218";
    familia["Filmes para as idades de 5 a 7"]           = "5455";
    familia["Filmes para as idades de 8 a 10"]          = "561";
    familia["Filmes para as idades de 11 a 12"]         = "6962";
    familia["Criancas & Familia"]                       = "783";
    familia["Criancas Fe Espiritualidade"]              = "751423";
    familia["Educacao para Criancas"]                   = "10659";
    familia["Fe e Espiritualidade no Cinema"]           = "52804";
    familia["Fé e Espiritualidade"]                     = "26835";
    return familia;
}

map <string,string> sci_fi(){
    map <string,string> scifi;
    scifi["Sci-Fi & Fantasy"]                           = "1492";
    scifi["Sci-Fi Adventure"]                           = "6926";
    scifi["Sci-Fi Filmes de Terror"]                    = "1694";
    scifi["Sci-Fi Thrillers"]                           = "11014";
    scifi["Foreign Sci-Fi & Fantasy"]                   = "6485";
    scifi["TV Sci-Fi & Fantasy"]                        = "1372";
    scifi["Ação Sci-Fi & Fantasia"]                     = "1568";
    return scifi;
}

map <string,string> musica(){
    map <string,string> musica;
    musica["Musica"]                                    = "1701";
    musica["Musica Latina"]                             = "10741";
    musica["Musicais Classicos"]                        = "32392";
    musica["Musicais da Disney"]                        = "59433";
    musica["Musicais de Palco"]                         = "55774";
    musica["Musicais para Criancas"]                    = "52843";
    musica["Musicals Showbiz"]                          = "13573";
    musica["Rock & Pop Shows"]                          = "3248";
    musica["Shows de Música"]                           = "2856";
    musica["Jazz & Easy Listening"]                     = "10271";
    musica["Concertos Urbanos e Dança"]                 = "9472";
    musica["Country e Folk"]                            = "1105";
    return musica;
}

map <string,string> dramas(){
    map <string,string> dramas;
    dramas["Dramas"]                                    = "5763";
    dramas["Dramas Showbiz"]                            = "5012";
    dramas["Dramas Românticos"]                         = "1255";
    dramas["Dramas Questão Social"]                     = "3947";
    dramas["Dramas Políticos"]                          = "6616";
    dramas["Dramas Militares"]                          = "11";
    dramas["Dramas Independentes"]                      = "384";
    dramas["Dramas Estrangeiros"]                       = "2150";
    dramas["Dramas de Tribunal"]                        = "2748";
    dramas["Dramas de Gays e Lésbicas"]                 = "500";
    dramas["Dramas de Ficção Científica"]               = "3916";
    dramas["Dramas de Crime"]                           = "6889";
    dramas["Dramas Biográficos"]                        = "3179";
    dramas["Dramas baseados em Livros"]                 = "4961";
    dramas["Dramas baseados em Fatos Reais"]            = "3653";
    dramas["Dramas Adolescentes"]                       = "9299";
    dramas["Tearjerkers"]                               = "6384";
    return dramas;
}

map <string,string> tv(){
    map <string,string> tv;
    tv["Shows de TV"]                                   = "83";
    tv["Shows de TV Teen"]                              = "60951";
    tv["Shows de TV Militares"]                         = "25804";
    tv["Shows de TV Classico"]                          = "46553";
    tv["Shows de TV Britanica"]                         = "52117";
    tv["Reality TV"]                                    = "9833";
    tv["Programas de TV de Crime"]                      = "26146";
    tv["Programas de TV Coreanos"]                      = "67879";
    tv["Dramas de TV"]                                  = "11714";
    tv["Comida e Viagens na TV"]                        = "72436";
    tv["TV Cult"]                                       = "74652";
    tv["TV Kids"]                                       = "27346";
    tv["TV Mysteries"]                                  = "4366";
    tv["TV Sci-Fi & Fantasy"]                           = "1372";
    return tv;
}

map <string,string> thrillers(){
    map <string,string> thrillers;
    thrillers["Thrillers"]                              = "8933";
    thrillers["Thrillers Clássicos"]                    = "46588";
    thrillers["Thrillers de Crime"]                     = "10499";
    thrillers["Thrillers de Espiao"]                    = "9147";
    thrillers["Thrillers Estrangeiros"]                 = "10306";
    thrillers["Thrillers Independentes"]                = "3269";
    thrillers["Thrillers Picantes"]                     = "972";
    thrillers["Thrillers Politicos"]                    = "10504";
    thrillers["Thrillers Psicologicos"]                 = "5505";
    thrillers["Thrillers Sobrenaturais"]                = "11140";
    return thrillers;
}

map <string, string> l_acao =                             acao();
map <string, string> l_animacoes =                        animacoes();
map <string, string> l_anime =                            anime();
map <string, string> l_docs =                             documentarios();
map <string, string> l_filmes =                           filmes();
map <string, string> l_f_romanticos =                     filmes_romanticos();
map <string, string> l_f_estrangeiros =                   filmes_estrangeiros();
map <string, string> l_esportes =                         esportes();
map <string, string> l_classicos =                        classicos();
map <string, string> l_comedias =                         comedias();
map <string, string> l_familia =                          familia();
map <string, string> l_dramas =                           dramas();
map <string, string> l_terror =                           terror();
map <string, string> l_musica =                           musica();
map <string, string> l_scifi =                            sci_fi();
map <string, string> l_tv =                               tv();
map <string, string> l_thrillers =                        thrillers();

void create_link(string codigo){
    string link_netflix = "https://www.netflix.com/browse/genre/";
    cout << "==================================" << endl;
    cout << "=      Copie o link abaixo       =" << endl;
    cout << "=    e cole no seu navegador     =" << endl;
    cout << "==================================" << endl;
    cout << link_netflix << codigo << endl;
    cout << "==================================" << endl;
    cout << "\n";
}

bool check_input(string in){
    if(in.length() > 2){
        return false;
    } else {
        bool is_valid = true;
        if (in != "\n"){
            for (int i = 0; i < in.length(); i++){
                if (isdigit(in[i]) == false){
                    is_valid = false;
                }
            }
        }
        return is_valid;
    }
}

bool check_key(string key, vector<string> keys){
    bool check_result = false;
    for (int i = 0; i < keys.size(); i++){
        if (boost::iequals(key, keys[i])){
            check_result = true;
        }
    }
    return check_result;
}

vector<string> list_keys(map <string,string> m){
    vector <string> key_list;
    int count = 1;
    for(map<string,string>::iterator it = m.begin(); it != m.end(); ++it) {
        key_list.push_back(it->first);
    }
    return key_list;
}

void show_subcategories(int index, string name){
    map <string,string> :: iterator it;
    map <string, string> subc;
    string code;
    int codex = index;
    if (codex == -1 ){
        int codex = rand() % 18;
    }
    switch(codex){
        case 0:
            subc = l_acao;
            break;
        case 1:
            subc = l_animacoes;
            break;
        case 2:
            subc = l_docs;
            break;
        case 3:
            subc = l_filmes;
            break;
        case 4:
            subc = l_esportes;
            break;
        case 5:
            subc = l_classicos;
            break;
        case 6:
            subc = l_comedias;
            break;
        case 7:
            subc = l_familia;
            break;
        case 8:
            subc = l_dramas;
            break;
        case 9:
            subc = l_terror;
            break;
        case 10:
            subc = l_musica;
            break;
        case 11:
            subc = l_scifi;
            break;
        case 12:
            subc = l_tv;
            break;
        case 13:
            subc = l_thrillers;
            break;
        case 14:
            create_link(epicos);
            break;
        case 15:
            create_link(minisserie);
            break;
        case 16:
            create_link(obras_de_epoca);
            break;
        case 17:
            create_link(westerns);
            break;
        case 18:
            subc = l_anime;
            break;
        case 19:
            subc = l_f_estrangeiros;
            break;
        case 20:
            subc = l_f_romanticos;
            break;
    }
    vector<string> list_subc_keys;
    string choice;
    list_subc_keys = list_keys(subc);
    if (index != -1){
        cout << "==================================" << endl;
        cout << "     " << name << endl;
        cout << "==================================" << endl;
        for (int j = 0; j < list_subc_keys.size(); j++){
            cout << j + 1 << ") " << list_subc_keys[j] << endl;
        }
        cout << "=  Digite o nome da subcategoria =" << endl;
        cout << "=  que deseja dentre as listadas =" << endl;
        cout << "> ";
        getline(cin, choice);
        cout << "==================================" << endl;
    } else {
        choice = list_subc_keys[rand() % (list_subc_keys.size() - 1)];
    }
    if (check_key(choice, list_subc_keys)){
         it = subc.find(choice);
         code = it->second;
         if (!check_input(choice)){
             if(choice == "anime"){
                     show_subcategories(18, "Anime");
             } else if(choice == "regioes"){
                     show_subcategories(19, "Filmes Estrangeiros");
             } else if (choice == "romances"){
                     show_subcategories(20, "Filmes Romanticos");
             }
         }
        create_link(code);
    }
}

void show_categories(){
    int choosed = -1;
    string aux;
    cout << "===         Categories         ===" << endl;
    for (int i = 0; i < lista_categorias.size(); i++){
        cout << i + 1 << ") " << lista_categorias[i] << endl;
    }
    cout << "Digite o numero referente a " << endl;
    cout << "categoria que deseja" << endl;
    cout << "Para uma escolha aleatoria, " << endl;
    cout << "pressione enter." << endl;
    cout << "> ";
    getline(cin, aux);
    cout << "==================================" << endl;
    cout << "\n";
    if (aux == "\n"){
        show_subcategories(choosed, "Escolha Aleatoria");
    }
    else if (check_input(aux)){
        int ind = stoi(aux);
        if (!(ind - 1 < 0 || ind > lista_categorias.size())){
            choosed = ind - 1;
        } else {
            choosed = -2;
        }
    }
    if ((choosed >= -1) && (choosed < lista_categorias.size())){
        show_subcategories(choosed, lista_categorias[choosed]);
    }

}


void menu(){
    cout << "==================================" << endl;
    cout << "===         EasyNetflix        ===" << endl;
    cout << "==================================" << endl;
    cout << "  O que voce quer assistir hoje?  " << endl;
    cout << "==================================" << endl;
    cout << "\n";

    show_categories();
}


int main (){
    menu();
    return 0;
}