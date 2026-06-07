try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(7) and f(-7));
        return 0;
    }
    
except: print('error')
