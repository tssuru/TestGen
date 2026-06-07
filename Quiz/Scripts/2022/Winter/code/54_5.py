try:
    
    a,b,c=8,6,7
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(b=0,c=1,4)
    print(a,b,c)
    
except: print('error')
