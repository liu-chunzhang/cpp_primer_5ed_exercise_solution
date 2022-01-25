#include "Animal.h"

Endangered::~Endangered() {
    std::cout << "Endangered dtor" << std::endl;
}

std::ostream& Endangered::print() const {
    return std::cout << "Endangered::print" << std::endl;
}

void Endangered::highlight() const {
    std::cout << "Endangered::highlight" << std::endl;
}

double Endangered::max_weight() const {
    std::cout << "Endangered::max_weight" << std::endl;
    return 0;
}

ZooAnimal::ZooAnimal( std::string animal , bool exhibit , std::string family ) : nm( animal ) , exhibit_stat( exhibit ) , fam_name( family ) { }

ZooAnimal::~ZooAnimal() {
    std::cout << "Animal dtor" << std::endl;
}

std::ostream& ZooAnimal::print() const {
    return std::cout << "Animal::print" << std::endl;
}

int ZooAnimal::population() const {
    std::cout << "Animal::population" << std::endl;
    return 0;
}

double ZooAnimal::max_weight() const {
    std::cout << "Animal::max_weight" << std::endl;
    return 0;
}

std::string ZooAnimal::name() const {
    return nm;
}

std::string ZooAnimal::family_name() const {
    return fam_name;
}

bool ZooAnimal::onExhibit() const {
    return exhibit_stat;
}

Bear::Bear( std::string name , bool onExhibit ) : ZooAnimal( name , onExhibit , "Bear" ) , dancetype( two_left_feet ) { }

Bear::~Bear() {
    std::cout << "Bear dtor" << std::endl;
}

std::ostream &Bear::print() const {
    return std::cout << "Bear::print" << std::endl;
}

int Bear::toes() const {
    std::cout << "Bear::toes" << std::endl;
    return 0;
}

int Bear::mumble( int ) {
    std::cout << "Bear::mumble" << std::endl;
    return 0;
}

void Bear::dance( DanceType ) const {
    std::cout << "Bear::dance" << std::endl;
}

Raccoon::Raccoon( std::string name , bool onExhibit ) : ZooAnimal( name , onExhibit , "Raccoon" ) {}

Panda::Panda( std::string name , bool onExhibit ) : ZooAnimal( name , onExhibit , "Panda" ) , Bear( name , onExhibit ) , Raccoon( name , onExhibit ) {}
                                                            // 教材上的类Panda没有Endangered::critical和sleeping_flag，所以此处略去了

Panda::~Panda() {
    std::cout << "Panda dtor" << std::endl;
}

std::ostream& Panda::print() const {
    return std::cout << "Panda::print" << std::endl;
}

void Panda::highlight() const {
    std::cout << "Panda::highlight" << std::endl;
}

int Panda::toes() {
    std::cout << "Panda::toes" << std::endl;
    return 0;
}

void Panda::cuddle() {
    std::cout << "Panda::cuddle" << std::endl;
}

double Panda::max_weight() const {
    return std::max( ZooAnimal::max_weight() , Endangered::max_weight() ) ;     // 避免二义性
}
