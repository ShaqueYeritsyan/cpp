//https://www.tutorialspoint.com/static-data-members-in-cplusplus
#include <iostream>
class countOfObject
{
	private:
		//static data member to count the objects
		static int count;
		
	public:
		//constructor
		countOfObject()
		{
			count++;
		}
		
		//static member function
		static int totalObjects(void)
		{
			return count;
		}
};

//initialise static member function
int countOfObject::count =0;

int main()
{
	countOfObject obj1;
	countOfObject obj2;
	countOfObject obj3;
	countOfObject obj4;
	//printing object count 
	std::cout << "Total objects created: " << countOfObject::totalObjects() << "\n";
	return 0;
}