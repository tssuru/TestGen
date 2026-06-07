try:
    def g(a):
        x=78
        if a: 
            return 3
        elif a<=4:
             return 1
        else:
             x=5
        return x
    
    print(g(8))
    
except: print('error')
