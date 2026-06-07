try:
    a,b,c=7,6,0
    def h(b):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=1,5,3
    print(h(b),a,b,c)
    
except: print('error')
