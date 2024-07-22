#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include "Filme.h"

using namespace std;

vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    ifstream file("filmes.csv");
    string line;
    vector<Filme> filmes;

    // Verifica se o arquivo foi aberto corretamente
    if (!file.is_open()) {
        cerr << "Erro ao abrir o arquivo CSV!" << endl;
        return 1;
    }

    // Pula a primeira linha (cabeçalho)
    getline(file, line);

    while (getline(file, line)) {
        vector<string> fields = split(line, ',');
        
        // Converta e atribua os valores apropriados às variáveis do Filme
        bool adult = (fields[0] == "true");
        // Aqui você precisará converter as strings para os tipos apropriados,
        // como os vetores de unordered_maps para genres, production_companies, etc.
        vector<unordered_map<int, string>> genres; // Adicione a lógica de conversão aqui
        int id = stoi(fields[2]);
        string imdb_id = fields[3];
        string original_language = fields[4];
        string original_title = fields[5];
        string overview = fields[6];
        double popularity = stod(fields[7]);
        vector<unordered_map<int, string>> production_companies; // Adicione a lógica de conversão aqui
        vector<unordered_map<string, string>> production_countries; // Adicione a lógica de conversão aqui
        string release_date = fields[10];
        int revenue = stoi(fields[11]);
        int runtime = stoi(fields[12]);
        vector<unordered_map<string, string>> spoken_languages; // Adicione a lógica de conversão aqui
        string title = fields[14];
        double vote_average = stod(fields[15]);
        int vote_count = stoi(fields[16]);

        // Cria um objeto Filme e adiciona ao vetor
        Filme filme(adult, genres, id, imdb_id, original_language, original_title, overview, popularity,
                    production_companies, production_countries, release_date, revenue, runtime,
                    spoken_languages, title, vote_average, vote_count);

        filmes.push_back(filme);
    }

    // Fecha o arquivo
    file.close();

    // Exemplo de interação: listando os títulos dos filmes
    for (auto &filme : filmes) {
        cout << "Título: " << filme.getTitle() << ", Data de Lançamento: " << filme.getReleaseDate() << endl;
    }

    return 0;
}
