try:
    
    a,b,c=8,7,9
    def g(a,b=6,c=7):
        print(a,b,c,end="")
    
    g(b=3,a=0,c=4)
    print(a,b,c)
    
except: print('error')
