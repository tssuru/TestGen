try:
    a,b,c=9,1,5
    def h(b):
        a=4
        b+=3
        c=2
        return a+b+c
    
    a,b,c=3,5,0
    print(h(b),a,b,c)
    
except: print('error')
