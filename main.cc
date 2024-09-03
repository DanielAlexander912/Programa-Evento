#include <iostream>

const int kCapacity = 10;

struct Person{
    std:: string name;
    std:: string lastName;;
    int age;
    std:: string media;
    std:: string interest;

};

struct Event
{
    std:: string name;
    std:: string date;
    int maxPlaces;
    std:: string peopleRegistered[kCapacity];
};


int main(int argc, char *argv[]){
    std::cout << "Hello world" << std::endl;

    return 0;
}