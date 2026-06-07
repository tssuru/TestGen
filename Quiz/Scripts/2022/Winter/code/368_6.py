try:
    a,b,c=2,4,3
    def h(b):
        global c
        a=4
        b-=5
        c=4
        return a+b+c
    
    a,b,c=7,0,5
    print(h(b),a,b,c)
    
except: print('error')
