try:
    def f(a,b):
        c=84
        if b<=-5:
            return 9
        elif a<3:
             c=5
        else: 
            return 3
        return c
    
    print(f(6,-5))
    
except: print('error')
