try:
    a,b,c=7,9,0
    def h(b):
        global c
        a=2
        b-=1
        c=5
        return a+b+c
    
    a,b,c=3,5,6
    print(h(b),a,b,c)
    
except: print('error')
