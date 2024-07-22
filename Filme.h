#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Filme {
public:
    // Construtor
    Filme(bool adult, 
          vector<unordered_map<int, string>>& genres,
          int id,
          string imdb_id,
          string original_language,
          string original_title,
          string overview,
          double popularity,
          vector<unordered_map<int, string>> production_companies,
          vector<unordered_map<string, string>> production_countries,
          string release_date,
          int revenue,
          int runtime,
          vector<unordered_map<string, string>> spoken_languages,
          string title,
          double vote_average,
          int vote_count);

    // Métodos de acesso (getters)
    bool getAdult() ;
    vector<unordered_map<int, string>> getGenres();
    int getId();
    string getImdbId();
    string getOriginalLanguage();
    string getOriginalTitle();
    string getOverview();
    double getPopularity();
    vector<unordered_map<int, string>> getProductionCompanies();
    vector<unordered_map<string, string>> getProductionCountries();
    string getReleaseDate();
    int getRevenue();
    int getRuntime();
    vector<unordered_map<string, string>> getSpokenLanguages();
    string getTitle();
    double getVoteAverage();
    int getVoteCount();
    
private:
    bool adult;
    vector<unordered_map<int, string>> genres;
    int id;
    string imdb_id;
    string original_language;
    string original_title;
    string overview;
    double popularity;
    vector<unordered_map<int, string>> production_companies;
    vector<unordered_map<string, string>> production_countries;
    string release_date;
    int revenue;
    int runtime;
    vector<unordered_map<string, string>> spoken_languages;
    string title;
    double vote_average;
    int vote_count;
};