try:
    a,b,c=2,4,6
    def h(b):
        global c
        a=1
        b-=4
        c=3
        return a+b+c
    
    a,b,c=8,9,0
    print(h(b),a,b,c)
    
except: print('error')
