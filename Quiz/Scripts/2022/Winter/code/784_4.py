try:
    def g(c):
        x=67
        if c!=2: 
            return 9
        if c!=4:
             x=7
        else:
             return 1
        return x
    
    print(g(-3))
    
except: print('error')
