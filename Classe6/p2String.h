#ifndef __P2STRING__
#define __P2STRING__

typedef unsigned int uint;

class p2String{
private:

	char* string;
	uint size;

public:

	p2String();
	p2String(const char* _string);
	p2String(uint _size);

	bool operator==(const p2String& _string)const;
	bool operator!=(const p2String& _string)const;

	const char* c_str()const;

	~p2String(){};
	
};
#endif