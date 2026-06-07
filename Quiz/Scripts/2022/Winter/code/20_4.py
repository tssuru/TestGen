try:
    def f(a):
        u=66
        if a: 
            return 3
        elif a<5:
             return 2
        else:
             u=7
        return u
    
    print(f(8))
    
except: print('error')
