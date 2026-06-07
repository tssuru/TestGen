try:
    a,b,c=3,2,7
    def h(a):
        global c
        a=1
        b-=2
        c=2
        return a+b+c
    
    a,b,c=0,8,0
    print(h(b),a,b,c)
    
except: print('error')
