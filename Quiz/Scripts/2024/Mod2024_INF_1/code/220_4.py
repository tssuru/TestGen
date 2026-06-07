try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<=1;
    }
    
    int main(){
        std::cout<<(f(0) && f(-3));
        return 0;
    }
    
except: print('error')
