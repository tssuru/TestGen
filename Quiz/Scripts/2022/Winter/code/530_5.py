try:
    
    a,b,c=9,7,6
    def g(a,b=8,c=6):
        print(a,b,c,end="")
    
    g(5,c=2,b=3)
    print(a,b,c)
    
except: print('error')
