try:
    
    a,b,c=8,9,7
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(b=0,c=5,3)
    print(a,b,c)
    
except: print('error')
