try:
    a,b,c=7,8,0
    def g(b):
        a=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,2,8
    print(g(b),a,b,c)
except: print('error')
