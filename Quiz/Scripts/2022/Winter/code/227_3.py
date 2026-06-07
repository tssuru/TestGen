try:
    
    def f(n):
        print("f", end="");
        return n>=2
    
    print(f(-5) or f(0))
    
except: print('error')
