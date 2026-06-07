try:
    
    def f(n):
        print("f", end="");
        return n>-3
    
    print(f(6) or f(4))
    
except: print('error')
