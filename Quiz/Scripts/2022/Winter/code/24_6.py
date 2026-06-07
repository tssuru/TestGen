try:
    a,b,c=9,3,6
    def g(b):
        global c
        a+=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=7,2,0
    print(g(b),a,b,c)
    
except: print('error')
