try:
    
    a,b,c=6,6,8
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(b=0,c=4,3)
    print(a,b,c)
    
except: print('error')
