try:
    a,b,c=0,9,2
    def g(b):
        global c
        a+=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=6,3,8
    print(g(b),a,b,c)
    
except: print('error')
