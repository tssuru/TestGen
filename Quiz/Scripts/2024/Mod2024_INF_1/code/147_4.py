try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n>-1;
    }
    
    int main(){
        std::cout<<(f(7) || f(4));
        return 0;
    }
    
except: print('error')
