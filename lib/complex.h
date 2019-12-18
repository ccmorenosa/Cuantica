#ifndef complex_h
#def complex_h

class complex{

 public:

  complex();
  
  complex(double a, double b, bool polar=false);

  void SetPol(bool p);

  void SetImg(double b);

  void SetRe(double a);

  void SetMod(double r);

  void SetArg(double t);
  
  void SetZ(double a, double b, bool polar=false);

  complex operator+(complex &other);

  complex operator-(complex &other);

  complex Scalar_Product(double Scl);

  complex operator*(complex &other);

  complex operator/(complex &other);
  
  bool operator==(complex &other);

  bool operator!=(complex &other);

  complex operator+=(complex &other);

  complex operator-=(complex &other);

  complex operator*=(complex &other);

  complex operator/=(complex &other);

  std::ostream& operator<<(std::ostream &out, const complex &c);

  std::istream& operator>>(std::istream &in, complex &c);

  void Conjugate();

  double GetRe(void);

  double GetImg(void);

  double GetMod(void);

  double GetArg(void);

  double CalRe(void);

  double CalImg(void);

  double CalMod(void);

  double CalArg(void);

  bool GetPol(void);
  
 private:

  std::vector<double> z(2);

  std::vector<double> zp(2);

  bool Polar=false;
  
};

double Mod(complex z);

double Re(complex z);

double Img(complex z);

double Arg(complex z);

bool polar(complex z);

complex Conj(complex z);

complex Pow(complex z);

#endif
