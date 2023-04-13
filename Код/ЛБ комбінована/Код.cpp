#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct WeatherData {
    string city;
    string date;
    float temperature;
};

void printWeatherData(const WeatherData& data) {
    cout << "City: " << data.city << endl;
    cout << "Date: " << data.date << endl;
    cout << "Temperature: " << data.temperature << " C" << endl;
}

int main() {
    vector<WeatherData> database = {
        {"Kyiv", "2022-01-01", -2.5},
        {"Lviv", "2022-01-01", -3.0},
        {"Odessa", "2022-01-01", 2.5},
        {"Kyiv", "2022-01-02", -3.5},
        {"Lviv", "2022-01-02", -4.0},
        {"Odessa", "2022-01-02", 0.0},
        {"Kyiv", "2022-01-03", -4.0},
        {"Lviv", "2022-01-03", -5.0},
        {"Odessa", "2022-01-03", -1.0},
        {"Kyiv", "2022-01-04", -5.5},
        {"Lviv", "2022-01-04", -6.0},
        {"Odessa", "2022-01-04", -2.5}
    };

    int choice = 0;
    while (choice != 9) {
        cout << "MENU:" << endl;
        cout << "1. Print all weather data" << endl;
        cout << "2. Search by city" << endl;
        cout << "3. Search by date" << endl;
        cout << "4. Search by temperature range" << endl;
        cout << "5. Add weather data" << endl;
        cout << "6. Modify weather data" << endl;
        cout << "7. Delete weather data" << endl;
        cout << "8. Search by complex criteria" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Print all weather data
                for (const auto& data : database) {
                    printWeatherData(data);
                    cout << endl;
                }
                break;
            case 2: // Search by city
                {
                    string city;
                    cout << "Enter city: ";
cin >> city;
vector<WeatherData> searchResults;
for (const auto& data : database) {
if (data.city == city) {
searchResults.push_back(data);
}
}
if (!searchResults.empty()) {
cout << "Search results for city "" << city << "":" << endl;
for (const auto& result : searchResults) {
printWeatherData(result);
}
}
else {
cout << "No results found for city "" << city << """ << endl;
}
break;
}
case 3: // Search by date
{
string date;
cout << "Enter date to search (YYYY-MM-DD): ";
cin >> date;
auto it = find_if(database.begin(), database.end(), [=](const WeatherData& data) {
return data.date == date;
});
if (it != database.end()) {
cout << "Search result for date "" << date << "":" << endl;
printWeatherData(*it);
}
else {
cout << "No results found for date "" << date << """ << endl;
}
break;
}
case 4: // Search by temperature range
{
float minTemp, maxTemp;
cout << "Enter minimum temperature (C): ";
cin >> minTemp;
cout << "Enter maximum temperature (C): ";
cin >> maxTemp;
vector<WeatherData> searchResults;
for (const auto& data : database) {
if (data.temperature >= minTemp && data.temperature <= maxTemp) {
searchResults.push_back(data);
}
}
if (!searchResults.empty()) {
cout << "Search results for temperature range " << minTemp << "C - " << maxTemp << "C:" << endl;
for (const auto& result : searchResults) {
printWeatherData(result);
}
}
else {
cout << "No results found for temperature range " << minTemp << "C - " << maxTemp << "C" << endl;
}
break;
}
case 5: // Add new data
{
WeatherData newData;
cout << "Enter data for new weather measurement:" << endl;
cout << "City: ";
cin >> newData.city;
cout << "Date (YYYY-MM-DD): ";
cin >> newData.date;
cout << "Temperature (C): ";
cin >> newData.temperature;
cout << "Humidity (%): ";
cin >> newData.humidity;
database.push_back(newData);
cout << "New data added successfully!" << endl;
break;
}
case 6: // Sort data
{
    cout << "Sort data by:" << endl;
    cout << "1. City" << endl;
    cout << "2. Date" << endl;
    cout << "3. Temperature" << endl;
    int sortOption;
    cin >> sortOption;
    switch (sortOption) {
        case 1:
            sort(database.begin(), database.end(), [](const WeatherData& data1, const WeatherData& data2) {
                return data1.city < data2.city;
            });
            break;
        case 2:
            sort(database.begin(), database.end(), [](const WeatherData& data1, const WeatherData& data2) {
                return data1.date < data2.date;
            });
            break;
        case 3:
            sort(database.begin(), database.end(), [](const WeatherData& data1, const WeatherData& data2) {
                return data1.temperature < data2.temperature;
            });
            break;
        default:
            cout << "Invalid option" << endl;
            break;
    }
    break;
}
}
