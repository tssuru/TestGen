try:
    
    def f(n):
        print("f", end="");
        return n<-3
    
    print(f(-2) or f(5))
except: print('error')
