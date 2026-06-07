try:
    
    a,b,c=9,7,8
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(c=4,a=5,b=2)
    print(a,b,c)
    
except: print('error')
