try:
    def g(a,b):
        c=99
        if b:
            c=7
        if b>3:
             return 5
        else: 
            return 0
        return c
    
    print(g(-7,-5))
    
except: print('error')
