#include "cabecera.h"
#include <iostream>

using namespace std;

		Plano& Plano::operator + (const Plano &p){
			this->x += p.x;
			this->y += p.y;
			this->z += p.z;
			return *this;
		}
    	Plano& Plano::operator - (const Plano &p){
    		this->x -= p.x;
			this->y -= p.y;
			this->z -= p.z;
			return *this;
    	}
    	Plano& Plano::operator * (const Plano &p){
    		this->x *= p.x;
			this->y *= p.y;
			this->z *= p.z;
			return *this;
    	}
    	Plano& Plano::operator / (const Plano &p){
    		if(p.x != 0) this->x /= p.x;
			if(p.y != 0) this->y /= p.y;
			if(p.z != 0) this->z /= p.z;
			return *this;
    	}
    	Plano& Plano::operator ++(){
    		this->x ++;
    		this->y ++;
    		this->z ++;
    		return *this;
    	}
    	Plano& Plano::operator --(){
    		this->x --;
    		this->y --;
    		this->z --;
    		return *this;
    		
    	}
    	Plano Plano::operator ++(int){
    		Plano p(*this);
    		p.x = ++x;
    		p.y = ++y;
    		p.z = ++z;
    		return p;
    	}
    	Plano Plano::operator --(int){
    		Plano p(*this);
    		p.x = --x;
    		p.y = --y;
    		p.z = --z;
    		return p;
    	}
