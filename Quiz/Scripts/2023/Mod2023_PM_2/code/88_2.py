try:
    a,b,c=3,8,1
    def h(b):
        global c
        a=4
        b-=1
        c=2
        return a+b+c
    
    a,b,c=9,6,0
    print(h(b),a,b,c)
    
except: print('error')
