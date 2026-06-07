try:
    
    def f(n):
        print("f", end="");
        return n<2
    
    print(f(-4) or f(5))
    
except: print('error')
