#include "p2String.h"
#include <iostream>

p2String::p2String() : string(NULL), size(0){

}

p2String::p2String(const char* _string){
	
	size = strlen(_string) + 1;
	this->string = new char[size];

	strcpy(this->string, _string);
}

p2String::p2String(uint _size){

	size = _size;
}

const char* p2String::c_str()const{

	return string;
}


bool p2String::operator==(const p2String& _string)const{

	if (strcmp(string, _string.string) == 0)
		return true;
	else
		return false;
}

bool p2String::operator!=(const p2String& _string)const{

	if (strcmp(string, _string.string) == 0)
		return false;
	else
		return true;
}