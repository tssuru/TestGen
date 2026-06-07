try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(6) or f(-7))
    
except: print('error')
