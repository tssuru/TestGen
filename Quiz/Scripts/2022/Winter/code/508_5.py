try:
    
    a,b,c=8,6,9
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(a=5,2,c=1)
    print(a,b,c)
    
except: print('error')
