template<typename Iter, typename Pr>
void foreach(Iter f, Iter l, Pr op){
	while(f != l){
		op(*f);
		++f;
	}

}
