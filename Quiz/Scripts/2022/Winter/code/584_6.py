try:
    a,b,c=9,2,4
    def g(b):
        global c
        a+=5
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,6,8
    print(g(b),a,b,c)
    
except: print('error')
