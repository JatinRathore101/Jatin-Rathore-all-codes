/* c++ comes with libraries which help us in performing input/output.
Stream is a sequence of bytes, corresponding to input output.

input stream- from input devices to memory

output stream- from memory to  output devices

iostream is combined input output stream*/

#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter first number:"; // '<<' is called insertion operator.
    cin>>a;                      // '>>' is called extraction operator.
    cout<<"\nEnter second number:";
    cin>>b;
    cout<<"\nThe sum is:"<<a+b;
    return 0;
}

/*keywords
reserved for the use of the language itself,
hence these words are not available for reallocation or overloading by the user.
List of common keywords:
asm	double	new	switch
auto	else	operator	template
break	enum	private	this
case	extern	protected	throw
catch	float	public	try
char	for	register	typedef
class	friend	return	union
const	goto	short	unsigned
continue	if	signed	virtual
default	inline	sizedof	void
delete	int	static	volatile
do	long	struct	while

and many more.


*/
