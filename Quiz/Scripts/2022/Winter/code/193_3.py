try:
    
    def f(n):
        print("f", end="");
        return n>=-4
    
    print(f(2) and f(-6))
    
except: print('error')
