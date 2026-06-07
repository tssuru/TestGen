try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(1) or f(-2));
        return 0;
    }
    
except: print('error')
