try:
    
    a,b,c=9,7,8
    def g(a,b=6,c=7):
        print(a,b,c,end="")
    
    g(b=5,c=4,1)
    print(a,b,c)
    
except: print('error')
