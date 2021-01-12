template< Forward_iterator Itr> 
requires requires(Itr p, int i){p[i]; p +i;}
void Advance( Itr p, int n){
    p+= n
}
