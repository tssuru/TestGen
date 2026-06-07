try:
    
    a,b,c=9,7,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(a=5,b=3,b=0)
    print(a,b,c)
    
except: print('error')
