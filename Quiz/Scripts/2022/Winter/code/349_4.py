try:
    def f(a,b):
        c=44
        if a:
            c=9
        elif a==-5:
             c=4
        else: 
            return 3
        return c
    
    print(f(-7,7))
    
except: print('error')
