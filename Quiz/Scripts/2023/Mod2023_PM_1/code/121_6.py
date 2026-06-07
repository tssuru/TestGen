try:
    
    def f(n):
        print("f", end="");
        return n<2
    
    print(f(4) or f(0))
    
except: print('error')
