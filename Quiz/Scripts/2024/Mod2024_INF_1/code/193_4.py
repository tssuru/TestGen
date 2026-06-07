try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n==-4;
    }
    
    int main(){
        std::cout<<(f(0) or f(-1));
        return 0;
    }
    
except: print('error')
