try:
    a,b,c=3,1,8
    def g(b):
        global c
        a=1
        b+=3
        c=5
        return a+b+c
    
    a,b,c=4,6,2
    print(g(b),a,b,c)
    
except: print('error')
