#include <iostream>
using namespace std;


//1

//class Student {
//protected:
//    string name;
//    int age;
//
//public:
//
//
//    Student() 
//    {
//        name = "";
//        age = 0;
//    }
//
//    Student(string new_name, int new_age) 
//    {
//        name = new_name;
//        age = new_age;
//    }
//
//    string GetName() const 
//    {
//        return name;
//    }
//
//    int GetAge() const 
//    {
//        return age;
//    }
//
//    void SetName(string name) 
//    {
//        name = name;
//    }
//
//    void SetAge(int age) 
//    {
//        age = age;
//    }
//
//    void Print() const 
//    {
//        cout << "Name: " << name << ", Age: " << age << "\n";
//    }
//
//};
//
//class Aspirant : public Student 
//{
//
//protected:
//    string topic;
//
//public:
//
//    Aspirant() 
//    {
//        topic = "";
//    }
//
//    Aspirant(string new_name, int new_age, string new_topic)
//    {
//        name = new_name;
//        age = new_age;
//        topic = new_topic;
//    }
//
//    string GetTopic() const {
//        return topic;
//    }
//
//    void SetTopic(string topic) {
//        topic = topic;
//    }
//
//    void Print() const {
//        Student::Print();
//        cout << "Thesis Topic: " << topic << "\n";
//    }
//};
//
//int main()
//{
//    Aspirant asp("Angelina", 18, "Programming");
//    asp.Print();
//}
////////////////////////////////

//2
//class Transport 
//{
//protected:
//    string type;
//    double speed;
//    double distance;
//
//public:
//
//    Transport() : type(""), speed(0.0), distance(0.0) {}
//
//    Transport(string new_type, double new_speed, double new_distance) 
//    {
//        type = new_type;
//        speed = new_speed;
//        distance = new_distance;
//    }
//
//    double CalculateTime() const 
//    {
//        return distance / speed;
//    }
//
//    double CalculateCost() const 
//    {
//        return 0.0;
//    }
//
//    void Print() const {
//        cout << "type: " << type << ", Speed: " << speed << " km/h, Distance: " << distance << " km" << "\n";
//    }
//};
//
//class Car : public Transport 
//{
//private:
//    double fuel_consumption;//потребление топлива
//    double fuel_price;//цена за топлива
//
//public:
//    Car(double new_speed, double new_distance, double newfuel_consumption, double newfuel_price)
//    {
//        type = "Car";
//        speed = new_speed;
//        distance = new_distance;
//        fuel_consumption = newfuel_consumption;
//        fuel_price = newfuel_price;
//    }
//
//    double CalculateCost() const 
//    {
//        return (fuel_consumption / 100) * distance * fuel_price;
//    }
//};
//
//class Taxi : public Transport 
//{
//private:
//    double initial_fee;//первоначальный плата
//    double cost_per_kilometer;//стоимость за километр
//
//public:
//    Taxi(double new_speed, double new_distance, double newinitial_fee, double newcost_per_kilometer) 
//    {
//        type = "Taxi";
//        speed = new_speed;
//        distance = new_distance;
//        initial_fee = newinitial_fee;
//        cost_per_kilometer = newcost_per_kilometer;
//    }
//    double CalculateCost() const  
//    {
//        return initial_fee + cost_per_kilometer * distance;
//    }
//};
//
//class Tram : public Transport 
//{
//public:
//    Tram(double new_speed, double new_distance) 
//    {
//        type = "Tram";
//        speed = new_speed;
//        distance = new_distance;
//    }
//
//    double CalculateCost() const 
//    {
//        return 0.0;
//    }
//};
//
//class Trolleybus : public Transport 
//{
//private:
//    double ticket_price;//стоимость билета
//
//public:
//    Trolleybus(double new_speed, double new_distance, double newticket_price) 
//    {
//        type = "Trolleybus";
//        speed = new_speed;
//        distance = new_distance;
//        ticket_price = newticket_price;
//    }
//    double CalculateCost() const 
//    {
//        return ticket_price;
//    }
//};
//
//class Minibus : public Transport 
//{
//private:
//    double fare;//плата за проезд
//
//public:
//    Minibus(double new_speed, double new_distance, double new_fare) 
//    {
//        type = "Minibus";
//        speed = new_speed;
//        distance = new_distance;
//        fare = new_fare;
//    }
//    double CalculateCost() const 
//    {
//        return fare;
//    }
//};
//
//class ElectricScooter : public Transport 
//{
//private:
//    double rental_fee;//арендная плата
//    double usage_cost_per_minute;//стоимость за каждую минуту
//
//public:
//    ElectricScooter(double new_speed, double new_distance, double newrental_fee, double newusage_cost_per_minute) 
//    {
//        type = "Electric Scooter";
//        speed = new_speed;
//        distance = new_distance;
//        rental_fee = newrental_fee;
//        usage_cost_per_minute = newusage_cost_per_minute;
//    }
//    double CalculateCost() const  
//    {
//        return rental_fee + (CalculateTime() * 60) * usage_cost_per_minute;
//    }
//};
//
//class Airplane : public Transport 
//{
//private:
//    double ticket_price;//стоимость билета
//
//public:
//    Airplane(double new_speed, double new_distance, double newticket_price) 
//    {
//        type = "Airplane";
//        speed = new_speed;
//        distance = new_distance;
//        ticket_price = newticket_price;
//    }
//    double CalculateCost() const 
//    {
//        return ticket_price;
//    }
//};
//
//class Bicycle : public Transport 
//{
//public:
//    Bicycle(double new_speed, double new_distance) 
//    {
//        type = "Bicycle";
//        speed = new_speed;
//        distance = new_distance;
//    }
//    double CalculateCost() const  
//    {
//        return 0.0;
//    }
//};
//
//class Train : public Transport 
//{
//private:
//    double ticket_price;
//
//public:
//    Train(double new_speed, double new_distance, double newticket_price) 
//    {
//        type = "Train";
//        speed = new_speed;
//        distance = new_distance;
//        ticket_price = newticket_price;
//    }
//
//    double CalculateCost() const {
//        return ticket_price;
//    }
//};
//
//int main() {
//    Car car(120, 500, 7.5, 30);
//    Taxi taxi(60, 20, 5, 2);
//    Tram tram(20, 10);
//    Trolleybus trolleybus(30, 15, 1.5);
//    Minibus minibus(40, 25, 3);
//    ElectricScooter electricScooter(25, 5, 1, 0.2);
//    Airplane airplane(800, 500, 300);
//    Bicycle bicycle(15, 5);
//    Train train(80, 500, 150);
//
//    cout << "Car Info:" << endl;
//    car.Print();
//    cout << "Time: " << car.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << car.CalculateCost() << " UAH" << endl;
//
//    cout << "\nTaxi Info:" << endl;
//    taxi.Print();
//    cout << "Time: " << taxi.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << taxi.CalculateCost() << " UAH" << endl;
//
//    cout << "\nTram Info:" << endl;
//    tram.Print();
//    cout << "Time: " << tram.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << tram.CalculateCost() << " UAH" << endl;
//
//    cout << "\nTrolleybus Info:" << endl;
//    trolleybus.Print();
//    cout << "Time: " << trolleybus.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << trolleybus.CalculateCost() << " UAH" << endl;
//
//    cout << "\nMinibus Info:" << endl;
//    minibus.Print();
//    cout << "Time: " << minibus.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << minibus.CalculateCost() << " UAH" << endl;
//
//    cout << "\nElectric Scooter Info:" << endl;
//    electricScooter.Print();
//    cout << "Time: " << electricScooter.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << electricScooter.CalculateCost() << " UAH" << endl;
//
//    cout << "\nAirplane Info:" << endl;
//    airplane.Print();
//    cout << "Time: " << airplane.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << airplane.CalculateCost() << " UAH" << endl;
//
//    cout << "\nBicycle Info:" << endl;
//    bicycle.Print();
//    cout << "Time: " << bicycle.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << bicycle.CalculateCost() << " UAH" << endl;
//
//    cout << "\nTrain Info:" << endl;
//    train.Print();
//    cout << "Time: " << train.CalculateTime() << " hours" << endl;
//    cout << "Cost: " << train.CalculateCost() << " UAH" << endl;
//}

///////////////////////////////
//3
class Point
{
public:
    int X, Y;
};

class Pen 
{
public:
    string color;
    int thickness;
    string type;

    void Draw(Point start, int length, string direction) {}
};

class Brush 
{
public:
    string color;
};

class Geometry 
{
public:
    Pen pen;
    Brush* brush;
};

class Font 
{
public:
    int size;
    string family;
    bool bold;
    bool italic;
    bool underline;
    string color;

    Font() : size(12), family("Arial"), bold(false), italic(false), underline(false), color("Black") {}

    Font(int size, const string& family, bool bold, bool italic, bool underline, const string& color)
    {
        size = size;
        this->family = family;
        bold = bold;
        italic = italic;
        underline = underline;
        this->color = color;
    }
};
class Solidbrush : public Brush 
{
public:
    Solidbrush(string color) 
    {
        color = color;
    }
};

class Gradientbrush : public Brush 
{
public:
    string colors[2];
    Gradientbrush() {
        colors[0] = "";
        colors[1] = "";
    }
    Gradientbrush(string color1, string color2) 
    {
        colors[0] = color1;
        colors[1] = color2;
    }
};

class Hatchbrush : public Brush
{
public:
    string color;
    string pattern;
    Hatchbrush(string color, string pattern) 
    {
        color = color;
        pattern = pattern;
    }
};

class TextureBrush : public Brush 
{
public:
    string image_path;
    TextureBrush(string image_path)
    {
        image_path = image_path;
    }
};

class VisualBrush : public Brush 
{
public:
    string element_id;
    VisualBrush(string element_id)
    {
        element_id = element_id;
    }
};
class LinearGradientBrush : public Gradientbrush 
{
public:
    LinearGradientBrush(string color1 = "", string color2 = "")
    {
        Gradientbrush(color1, color2);
    }
};

class RadialGradientBrush : public Gradientbrush 
{
public:
    RadialGradientBrush(string color1 = "", string color2 = "")
    {
        Gradientbrush(color1, color2);
    }
};

class Rectangle : public Geometry 
{
public:
    int width;
    int height;

    Rectangle(int width, int height) : width(width), height(height) {}
};

class Ellipse : public Geometry 
{
public:
    int radiusX;
    int radiusY;
};

class Polyline : public Geometry 
{
public:
    Point Points[100];
    int Count;
};

class Button : public Geometry, public Font 
{
public:
    string text;
    int textsize;
    string textcolor;

    Button(int width, int height, int textsize, const string& text, const string& textcolor) : Geometry(), Font(), text(text), textsize(textsize), textcolor(textcolor)
    {
        pen.color = "Black";
        pen.thickness = 2;
        pen.type = "Solid";

        brush = new Solidbrush("Black");
    }

    void Draw(Point start, int length, string direction) {}
};

int main() 
{
    Rectangle rectangle(100, 50);
    Font font(14, "Times New Roman", true, false, false, "Blue");
    Solidbrush brush("Red");
    Button button(100, 50, 14, "Click me!", "White");
    cout << "Button text: " << button.text << endl;
    cout << "Button text color: " << button.textcolor << endl;
    cout << "Button pen color: " << button.pen.color << endl;
    cout << "Button pen thickness: " << button.pen.thickness << endl;
    cout << "Button pen type: " << button.pen.type << endl;
    cout << "Button brush color: " << button.brush->color << endl;

}
