#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

template <class T> class ComplexNum{
private:
  T _x;
  T _y;
public:
  //CONSTRUCTORES
  inline ComplexNum(T x=0, T y=0){
    setX(x);
    setY(y);
  }
  //CONSULTA
  inline T getX() const { return _x;}
  inline T getY() const { return _y;}
  //MODIFICACION
  inline void setX(T x) { _x=x;}
  inline void setY(T y) { _y=y;}
  //ENTRADA - SALIDA
  void leerComplexNum();
  void escribirComplexNum();
};

#endif
