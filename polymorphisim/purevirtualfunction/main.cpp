#include<iostream>
#include<vector>

using namespace std;

class Shape{

public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape(){};
};

class Open_Shape:public Shape{
    
 public:   
    virtual ~Open_Shape(){}; 
};

class Closed_Shape:public Shape{

public:
    virtual ~Closed_Shape(){};

};

class Line:public Open_Shape{

public:
    virtual void draw() override{
        cout<<"Drawing a Line\n";
    }
    virtual void rotate() override{
        cout<<"Rotating A line\n";
    }

    virtual ~Line(){}

};


class Circle:public Closed_Shape{

public:
    virtual void draw() override{
        cout<<"Drawing a Circle\n";
    }
    virtual void rotate() override{
        cout<<"Rotating A circle\n";
    }

    virtual ~Circle(){}

};

class Square:public Closed_Shape{

public:
    virtual void draw() override{
        cout<<"Drawing a square\n";
    }
    virtual void rotate() override{
        cout<<"Rotating A square\n";
    }

    virtual ~Square() {}

};

void screen_refresh(vector<Shape*> &shapes){
    cout<<"Refreshing\n";
    for(const auto p:shapes){
        p->draw();
    }

}




int main(){

    //Shape s;  //compiler error
    //Shape *p = new Shape();  //compiler error

    /*Circle c;
    c.draw();
    Line l;
    l.draw();*/

    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape*> shapes{s1,s2,s3};
    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;


    return 0;
}