try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(-8) && f(4));
        return 0;
    }
    
except: print('error')
