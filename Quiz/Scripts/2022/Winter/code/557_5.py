try:
    
    a,b,c=8,9,6
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(3,c=0,b=5)
    print(a,b,c)
    
except: print('error')
