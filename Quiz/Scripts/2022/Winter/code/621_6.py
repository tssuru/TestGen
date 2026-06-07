try:
    a,b,c=6,0,1
    def h(b):
        global c
        a-=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=5,2,8
    print(h(b),a,b,c)
    
except: print('error')
