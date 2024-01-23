/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */



#include <iostream>

#include <string>

#include <unordered_map>



using namespace std;



string decode_message(string key, string message) {

    unordered_map<char, char> mapping;

    set<char> seen_letters;





    for (int i = 0; i < key.length(); i++) {

        char ch = key[i];

        if (isalpha(ch) && !seen_letters.count(ch)) {

            mapping[ch] = 'a' + seen_letters.size();

            seen_letters.insert(ch);

        }

    }





    string decoded_message = "";

    for (char ch : message) {

        if (mapping.count(ch)) {

            decoded_message += mapping[ch];

        } else {

            decoded_message += ch;

        }

    }



    return decoded_message;

}



int main() {

    string key = "happy boy";

    string message = "lgb qv ph zsm";



    string decoded_message = decode_message(key, message);

    cout << "Decoded message: " << decoded_message << endl;

    return 0;

}

 
