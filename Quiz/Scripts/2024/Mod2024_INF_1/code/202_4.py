try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(4) or f(0));
        return 0;
    }
    
except: print('error')
