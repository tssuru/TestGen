try:
    a,b,c=7,2,8
    def h(b):
        global c
        a=2
        b-=5
        c=3
        return a+b+c
    
    a,b,c=4,1,3
    print(h(b),a,b,c)
    
except: print('error')
