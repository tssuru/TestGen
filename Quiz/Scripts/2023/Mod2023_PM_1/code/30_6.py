try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(5) or f(2))
    
except: print('error')
