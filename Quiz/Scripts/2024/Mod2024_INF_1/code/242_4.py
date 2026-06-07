try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n==3;
    }
    
    int main(){
        std::cout<<(f(-2) and f(-7));
        return 0;
    }
    
except: print('error')
