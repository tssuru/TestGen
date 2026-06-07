try:
    
    def f(n):
        print("f", end="");
        return n>=3
    
    print(f(6) and f(9))
    
except: print('error')
