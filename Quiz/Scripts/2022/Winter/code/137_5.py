try:
    
    a,b,c=7,6,9
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(b=3,c=1,2)
    print(a,b,c)
    
except: print('error')
