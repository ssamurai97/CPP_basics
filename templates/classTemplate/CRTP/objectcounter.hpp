#include<cstddef>
//cur

template<typename CounteType>
class ObectCounter{


	private:
		inline static std::size_t count{0};


	protected:

		ObectCounter(){
			++count;
		}

		ObectCounter(ObectCounter<CounteType> const&){
			++count;
		}


		//move constructor
		ObectCounter(ObectCounter<CounteType>&&){
			++count;
		}

		//destructor
		~ObectCounter(){
			--count;
		}

	public:
		static std::size_t live(){
			return count;
		}


};
