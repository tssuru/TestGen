try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n>=-1;
    }
    
    int main(){
        std::cout<<(f(-9) && f(5));
        return 0;
    }
    
except: print('error')
