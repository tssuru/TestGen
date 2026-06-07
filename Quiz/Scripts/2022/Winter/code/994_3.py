try:
    
    def f(n):
        print("f", end="");
        return n>4
    
    print(f(4) and f(0))
    
except: print('error')
