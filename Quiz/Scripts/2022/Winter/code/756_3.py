try:
    
    def f(n):
        print("f", end="");
        return n!=4
    
    print(f(3) and f(6))
    
except: print('error')
