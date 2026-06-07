try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<=-3;
    }
    
    int main(){
        std::cout<<(f(-3) && f(7));
        return 0;
    }
    
except: print('error')
