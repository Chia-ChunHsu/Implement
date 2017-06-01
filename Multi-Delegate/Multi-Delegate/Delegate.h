#include <list>
#include <functional>
template <class CType> 
class Delegate
{
public:
	//Types a;
	Delegate();
	//template <class Type>
	Delegate& operator+(CType nextOperation)
	{
		_commandList.push_back(nextOperation);
		return *this;
	}

	void Invoke();

private:
	//CType _t;
	std::list<CType> _commandList;
};
template <class CType>
Delegate<CType>::Delegate()
{
	Invoke();
}
/*
template <class CType>
void Delegate<CType>::operator+(std::function<CType> &nextOperation)
{
	_commandList.push_back(nextOperation);
	//return *this;
}
*/
template <class CType>
void Delegate<CType>::Invoke()
{
	//std::cout << _commandList.size();
	//void(*function)();

	for each (CType var in _commandList)
	{
		//var();
	}

	for (std::list<CType>::iterator i = _commandList.begin(); i != _commandList.end(); i++)
	{
	    (*i)();
	}
	//{
//		CType temp = _commandList[i];
		//std::function<CType> temp = _commandList[i];
		//function = temp ;
		//function();
		//&_commandList[i];
		//s();
	//}
}