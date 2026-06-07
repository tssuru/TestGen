try:
    def f(a,b):
        c=65
        if a>=5:
            return 9
        elif b<=4:
             c=7
        else: 
            c=9
        return c
    
    print(f(-9,-5))
    
except: print('error')
