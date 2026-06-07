try:
    a,b,c=9,6,2
    def h(b):
        global c
        a*=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,0,8
    print(h(b),a,b,c)
    
except: print('error')
