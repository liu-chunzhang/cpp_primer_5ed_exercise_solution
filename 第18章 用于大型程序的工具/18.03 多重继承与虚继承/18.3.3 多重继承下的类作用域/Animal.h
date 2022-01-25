#include <algorithm>
#include <iostream>

class Endangered {
    public:
        virtual ~Endangered() ;

    public:
		virtual std::ostream& print() const ;
        virtual void highlight() const ;
        virtual double max_weight() const ;
};

class ZooAnimal ;
extern std::ostream& operator << ( std::ostream &out , const ZooAnimal &zooanimal ) ;

class ZooAnimal {
    public:
        ZooAnimal() = default;
        ZooAnimal( std::string animal , bool exhibit , std::string family ) ;
        virtual ~ZooAnimal() ;

    public:
        virtual std::ostream& print() const ;
        virtual int population() const ;
        virtual double max_weight() const ;
        std::string name() const ;
        std::string family_name() const ;
        bool onExhibit() const ;

    protected:
        std::string nm;
        bool exhibit_stat = false ;
        std::string fam_name;
};

using DanceType = unsigned ;
constexpr DanceType two_left_feet = 0;
constexpr DanceType Astaire = 1;
constexpr DanceType Rogers = 42;

class Bear : public ZooAnimal {
    public:
        Bear() = default;
        Bear( std::string name , bool onExhibit = true , std::string family = "Bear" ) ;
        virtual ~Bear() ;

    public:
        virtual std::ostream &print() const ;
        virtual int toes() const ;
        int mumble( int ) ;
        void dance( DanceType ) const ;

    private:
        DanceType dancetype = Rogers;
};

class Panda : public Bear, public Endangered {
    public:
        Panda() = default;
        Panda( std::string name , bool onExhibit = true ) ;
        virtual ~Panda() ;

    public:
        virtual std::ostream& print() const ;
        void highlight() const ;
        virtual int toes() ;
        virtual void cuddle() ;
        virtual double max_weight() const;
};

class PolarBear : public Bear { /* . . . */ };
