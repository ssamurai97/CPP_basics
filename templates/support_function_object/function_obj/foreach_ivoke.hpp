#include<utility>
#include<functional>


template<typename Itr, typename Callable, typename...Args>
void foreach(Itr current, Itr end, Callable op, Args const&... args){

	while(current != end){
		std::invoke(op, args..., *current);

		++current;
	}
}
