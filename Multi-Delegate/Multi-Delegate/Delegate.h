#include <list>
#include <functional>

template <class CType> 
class Delegate
{
public:
	Delegate() {}
	//Delegate(int _num);	
	void Invoke(int _num);

	Delegate& operator+(CType nextOperation)
	{
		_commandList.push_back(nextOperation);
		return *this;
	}

	void operator()(int _num)
	{
		Invoke(_num);
	}
		

private:
	std::list<CType> _commandList;
};
/*
template <class CType,class Param>
Delegate<CType>::Delegate(int _num)
{
	Invoke(_num);
}
*/
template <class CType>
void Delegate<CType>::Invoke(int _num)
{
	// Method 1
	/*	
	for each (CType var in _commandList)
	{
		var();
	}
	*/
	// Method 2
	for (std::list<CType>::iterator i = _commandList.begin(); i != _commandList.end(); i++)
	{
	    (*i)(_num);
	}

}