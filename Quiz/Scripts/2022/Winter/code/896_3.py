try:
    
    def f(n):
        print("f", end="");
        return n>=-3
    
    print(f(9) or f(7))
    
except: print('error')
