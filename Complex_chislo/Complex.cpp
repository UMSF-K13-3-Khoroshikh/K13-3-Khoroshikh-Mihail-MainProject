using namespace std;

class Complex         // класс "Комплексное число"
{
private:
  double re, im;      // действительная и мнимая части

public:
  // конструкторы

  Complex ()
  {
  };

  Complex (double r)   
  {
    re = r;
    im = 0;
  }

  Complex (double r, double i)
  {
    re = r;
    im = i;
  }

  Complex (const Complex &c)   // конструктор копирования
  {
    re = c.re;
    im = c.im;
  }

  // деструктор
  ~Complex ()
  {
  }

  // остальные функции

  // Модуль комплексного числа
  double abs ()        
  {
    return sqrt (re * re + im * im);
  }

  // оператор присваивания
  Complex& operator = (Complex &c)   
  {
    re = c.re;
    im = c.im;

    return (*this);
  }

  // оператор +=
  Complex& operator += (Complex &c)   
  {
    re += c.re;
    im += c.im;
    return *this;
  }

 }

int
main ()
{
  Complex a (5, 2);
  Complex b (3, -3);

  cout << "a = " << a << "; b =" << b << endl;

  Complex c = a + b;

  cout << c << endl;

  return 0;
}
