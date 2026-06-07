try:
    def f(a):
        w=56
        if a: 
            return 4
        elif a<=4:
             return 8
        else:
             w=9
        return w
    
    print(f(-5))
    
except: print('error')
