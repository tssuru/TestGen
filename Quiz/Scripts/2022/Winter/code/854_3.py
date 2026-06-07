try:
    
    def f(n):
        print("f", end="");
        return n==0
    
    print(f(7) and f(4))
    
except: print('error')
