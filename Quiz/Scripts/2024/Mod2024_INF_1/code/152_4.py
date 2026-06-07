try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n>=2;
    }
    
    int main(){
        std::cout<<(f(3) and f(-5));
        return 0;
    }
    
except: print('error')
