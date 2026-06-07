try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<4;
    }
    
    int main(){
        std::cout<<(f(6) or f(-8));
        return 0;
    }
    
except: print('error')
