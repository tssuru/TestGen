try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(3) or f(-5));
        return 0;
    }
    
except: print('error')
