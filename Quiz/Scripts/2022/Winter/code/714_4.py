try:
    def f(a,b):
        c=51
        if a:
            c=0
        if b==5:
             c=5
        else: 
            return 3
        return c
    
    print(f(5,2))
    
except: print('error')
