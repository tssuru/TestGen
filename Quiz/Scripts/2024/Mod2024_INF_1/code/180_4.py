try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(8) or f(-3));
        return 0;
    }
    
except: print('error')
