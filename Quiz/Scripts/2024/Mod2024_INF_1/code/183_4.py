try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n>1;
    }
    
    int main(){
        std::cout<<(f(-8) and f(6));
        return 0;
    }
    
except: print('error')
