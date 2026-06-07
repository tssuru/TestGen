try:
    a,b,c=2,5,6
    def h(b):
        a+=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,9,0
    print(h(b),a,b,c)
    
except: print('error')
