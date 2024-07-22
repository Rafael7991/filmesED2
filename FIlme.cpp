#include "Filme.h"
#include <iostream> 
#include <unordered_map>
using namespace std;

// Construtor
Filme::Filme(bool adult, 
              vector<unordered_map<int, string>> genres,
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
             int vote_count)
    : adult(adult),
      genres(genres),
      id(id),
      imdb_id(imdb_id),
      original_language(original_language),
      original_title(original_title),
      overview(overview),
      popularity(popularity),
      production_companies(production_companies),
      production_countries(production_countries),
      release_date(release_date),
      revenue(revenue),
      runtime(runtime),
      spoken_languages(spoken_languages),
      title(title),
      vote_average(vote_average),
      vote_count(vote_count) {}

// Getters
bool Filme::getAdult() {
    return adult;
}

vector<unordered_map<int, string>> Filme::getGenres() {
    return genres;
}

int Filme::getId() {
    return id;
}

string Filme::getImdbId() {
    return imdb_id;
}

string Filme::getOriginalLanguage() {
    return original_language;
}

string Filme::getOriginalTitle() {
    return original_title;
}

string Filme::getOverview() {
    return overview;
}

double Filme::getPopularity() {
    return popularity;
}

vector<unordered_map<int, string>> Filme::getProductionCompanies() {
    return production_companies;
}

vector<unordered_map<string, string>> Filme::getProductionCountries() {
    return production_countries;
}

string Filme::getReleaseDate() {
    return release_date;
}

int Filme::getRevenue() {
    return revenue;
}

int Filme::getRuntime() {
    return runtime;
}

vector<unordered_map<string, string>> Filme::getSpokenLanguages() {
    return spoken_languages;
}

string Filme::getTitle() {
    return title;
}

double Filme::getVoteAverage() {
    return vote_average;
}

int Filme::getVoteCount() {
    return vote_count;
}

