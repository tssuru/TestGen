try:
    
    def f(n):
        print("f", end="");
        return n>=1
    
    print(f(5) or f(7))
    
except: print('error')
