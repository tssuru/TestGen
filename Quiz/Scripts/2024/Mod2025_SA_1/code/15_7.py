try:
    def f(a,b):
        c=54
        if a>2:
            c=3
        elif a<=-5:
             return 9
        else: 
            c=7
        return c
    
    print(f(-7,0))
except: print('error')
