try:
    
    def f(n):
        print("f", end="");
        return n>=0
    
    print(f(-9) or f(5))
    
except: print('error')
