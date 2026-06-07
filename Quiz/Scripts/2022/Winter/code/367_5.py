try:
    
    a,b,c=6,9,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(0,c=3,b=3)
    print(a,b,c)
    
except: print('error')
