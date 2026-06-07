try:
    def f(a,b):
        c=17
        if a>-2:
            return 1
        elif a>-4:
             c=6
        else: 
            return 5
        return c
    
    print(f(4,3))
    
except: print('error')
