try:
    
    a,b,c=8,7,6
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(b=4,c=2,3)
    print(a,b,c)
    
except: print('error')
