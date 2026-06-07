try:
    a,b,c=3,4,2
    def h(b):
        a+=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,3,9
    print(h(b),a,b,c)
    
except: print('error')
