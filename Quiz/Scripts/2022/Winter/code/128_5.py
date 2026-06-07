try:
    
    a,b,c=9,6,8
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(b=5,c=0,1)
    print(a,b,c)
    
except: print('error')
