try:
    
    def f(n):
        print("f", end="");
        return n>=4
    
    print(f(4) and f(5))
    
except: print('error')
