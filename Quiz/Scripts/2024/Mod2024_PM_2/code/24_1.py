try:
    a,b,c=2,9,6
    def h(b):
        global c
        a-=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,3,2
    print(h(b),a,b,c)
    
except: print('error')
